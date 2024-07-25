# ~/.bashrc: executed by bash(1) for non-login shells.

# Define color codes for prompt and text
COLOR_RESET='\[\033[0m\]'
COLOR_BLACK='\[\033[0;30m\]'
COLOR_RED='\[\033[0;31m\]'
COLOR_GREEN='\[\033[0;32m\]'
COLOR_YELLOW='\[\033[0;33m\]'
COLOR_BLUE='\[\033[0;34m\]'
COLOR_MAGENTA='\[\033[0;35m\]'
COLOR_CYAN='\[\033[0;36m\]'
COLOR_WHITE='\[\033[0;37m\]'

# Define bold colors
COLOR_BOLD_BLACK='\[\033[1;30m\]'
COLOR_BOLD_RED='\[\033[1;31m\]'
COLOR_BOLD_GREEN='\[\033[1;32m\]'
COLOR_BOLD_YELLOW='\[\033[1;33m\]'
COLOR_BOLD_BLUE='\[\033[1;34m\]'
COLOR_BOLD_MAGENTA='\[\033[1;35m\]'
COLOR_BOLD_CYAN='\[\033[1;36m\]'
COLOR_BOLD_WHITE='\[\033[1;37m\]'

# Set colorful prompt
PS1="${COLOR_BOLD_GREEN}\u@\h${COLOR_RESET}:${COLOR_BOLD_BLUE}\w${COLOR_RESET}$ "

# Define colors for `ls` output
export LS_COLORS='
di=34:          # directories in blue
fi=0:           # regular files in default color
ln=36:          # symbolic links in cyan
pi=33:          # named pipes (FIFO) in yellow
so=35:          # sockets in magenta
do=32:          # door (Solaris) in green
bd=33;40:       # block device in yellow on black
cd=33;40:       # character device in yellow on black
or=31;47:       # broken symbolic links in red on white
mi=31;47:       # missing files (device files) in red on white
su=37;41:       # setuid files in white on red
sg=37;42:       # setgid files in white on green
tw=30;42:       # writable directories in black on green
ow=34;43:       # other-writable directories in blue on yellow
st=37;44:       # sticky directories in white on blue
*.tar=31:       # tar files in red
*.zip=31:       # zip files in red
*.gz=31:        # gzipped files in red
*.bz2=31:       # bzipped files in red
*.xz=31:        # xzipped files in red
*.7z=31:        # 7zipped files in red
*.rar=31:       # rar files in red
*.jpg=35:       # jpg files in magenta
*.png=35:       # png files in magenta
*.gif=35:       # gif files in magenta
*.pdf=31:       # pdf files in red
'

# Apply the color settings
eval "$(dircolors -b)"

# Enable history
HISTSIZE=10000
HISTFILESIZE=20000
HISTCONTROL=ignoredups:erasedups
shopt -s histappend

# Aliases
alias ll='ls -la --color=auto'
alias gs='git status'
alias gco='git checkout'
alias gd='git diff'

# Custom functions
mkcd() {
    mkdir -p "$1" && cd "$1"
}

# Add custom bin directory to PATH
export PATH="$HOME/bin:$PATH"

# Source global definitions
if [ -f /etc/bashrc ]; then
    . /etc/bashrc
fi

# Auto-completion
if [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
fi

# Customize the terminal title
PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}: ${PWD}\007"'

# Enable programmable completion features
shopt -s progcomp

# Custom environment variables
export EDITOR=nvim
export PAGER=less
   # Enable color support for ls
   alias ls='ls --color=auto'
   
   # Define colors for file types
   export LS_COLORS='di=34:fi=0:ln=36:pi=33:so=35:bd=1;33:cd=1;33:or=31:ex=32:*.tar=31:*.zip=31:*.jpg=35:*.png=35:*.gif=35:'
   
