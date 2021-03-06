# Getting Started with C

**1.** First you have to install gcc. Copy and paste this if you are on Mac. You also need to install brew. 

```out
brew update
brew upgrade
brew info gcc
brew install gcc
```

**2.** Install vim because it's great. 

```brew install vim```

***I would also install Ultimate vimrc because it makes vim more palatable.***

**2.1.** (Optional but recommended) If git is not installed, then use brew to install git. 

```brew install git```

Clone the vimrc files. 

```git clone https://github.com/amix/vimrc.git ~/.vim_runtime```

For more information on how to update the file and install other versions, visit [this](https://sourabhbajaj.com/mac-setup/Vim/README.html) website. 

# To compile

To compile your code, use gcc. If you had a file called `hello.c`, you would compile it using 

`gcc hello.c && ./a.out -w`