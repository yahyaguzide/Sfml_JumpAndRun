# sfml_JumpAndRun
First real attempt for a Full Jump And Run Game

I did not set a License yet but this Code should be under the __BeerWareLicense__ ;)

The reason i started working on this Game is thanks to this Dudes -> [CodingBlocks](https://www.codingblocks.net)
Go check there Podcast, it's fun 

This Game uses Sfml Shared Libraries,
to compile this you will need to download the zip File [here](https://www.sfml-dev.org/download.php)

You also need to copy the following files into your Folder 

  - __openal32.dll__
  - __sfml-graphics-\*versionFirstDigit\*.dll__
  - __sfml-system-\*versionFirstDigit\*.dll__
  - __sfml-window-\*versionFirstDigit\*.dll__


##### I use [Code::Blocks](http://www.codeblocks.org) as IDE

To Link the Libraries in Code::Blocks you'll need to open
your 
Project > Build Options > Search directories > compiler

there you need to write the Path to the *SFML-\*version\*/include*

under 
Project > Build Options > Search directories > Linker

you write the path *SFML-\*version\*/lib*

You also can set the searchdirectories under the General settings

you will need to link the libraries (*Files ending with .a in the lib directory*) under
Project > Build Options > Linker settings 
for *Debug* and *Release*

Libraries ending with a \*-d\* are meant to be Linked in *Debug*
The ones without \*-d\* you will need to Link in Release

for other IDE's and Tutorials visit the Documentation on the website for [SFML](https://www.sfml-dev.org/learn.php)
