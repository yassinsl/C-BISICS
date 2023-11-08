#include "shell.h"

/**
 * print_alias - display or list aliases
 * @data: the program's data structure
 * @alias_name: name of the alias to be printed or NULL to list all aliases
 * Return: zero for success, or other number for errors
 */
int print_alias(data_of_program *data, char *alias_name)
{
int i, j, alias_name_length;
char alias_value[250] = {'\0'};

if (data->alias_list)
{
alias_name_length = str_length(alias_name);
for (i = 0; data->alias_list[i]; i++)
{
if (!alias_name || (str_compare(data->alias_list[i], alias_name, alias_name_length)
&&	data->alias_list[i][alias_name_length] == '='))
{
for (j = 0; data->alias_list[i][j]; j++)
{
alias_value[j] = data->alias_list[i][j];
if (data->alias_list[i][j] == '=')
break;
alias_value[j + 1] = '\0';
buffer_add(alias_value, "'");
buffer_add(alias_value, data->alias_list[i] + j + 1);
buffer_add(alias_value, "'\n");
_print(alias_value);
}
}
}
return 0;
}

/**
 * get_alias - retrieve an alias value
 * @data: the program's data structure
 * @alias_name: name of the requested alias.
 * Return: the alias value if found, or NULL if not found
 */
char *get_alias(data_of_program *data, char *alias_name)
{
int i, alias_name_length;

/* validate the arguments */
if (alias_name == NULL || data->alias_list == NULL)
return NULL;
alias_name_length = str_length(alias_name);
for (i = 0; data->alias_list[i]; i++)
{
if (str_compare(alias_name, data->alias_list[i], alias_name_length) &&
data->alias_list[i][alias_name_length] == '=')
{
return (data->alias_list[i] + alias_name_length + 1);
}
}
return NULL;
}
/**
 * set_alias - add or override an alias
 * @alias_string: alias to be set in the form (name='value')
 * @data: the program's data structure
 * Return: zero for success, or other number for errors
 */
int set_alias(char *alias_string, data_of_program *data)
{
int i, j;
char alias_name[250] = {'0'}, *temp = NULL;
/* validate the arguments */
if (alias_string == NULL || data->alias_list == NULL)
return 1;
/* Parse the alias_string to find the alias name */
for (i = 0; alias_string[i]; i++)
{
if (alias_string[i] != '=')
alias_name[i] = alias_string[i];
else
{
/* Check if the value of the alias is another alias */
temp = get_alias(data, alias_string + i + 1);
break;
}
}

/* Iterate through the alias list to check for alias name coincidence */
for (j = 0; data->alias_list[j]; j++)
{
if (str_compare(alias_name, data->alias_list[j], i) &&
data->alias_list[j][i] == '=')
{
/* If the alias already exists, free the old entry */
free(data->alias_list[j]);
break;
}
}
/* Add the alias */
if (temp)
{
buffer_add(alias_name, "=");
buffer_add(alias_name, temp);
data->alias_list[j] = str_duplicate(alias_name);
}
else
{
/* If the alias does not exist, add a new entry */
data->alias_list[j] = str_duplicate(alias_string);
}
return 0;
}
