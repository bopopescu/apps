# Common modules

This repository is not intended for public use. Programs in this repository is
not redistributable.

## How to load modules

1. Add the following line to your .bashrc file:
   ```
   # Guan Lab
   source /home/zhanghj/apps/scripts/deploy.sh

   # Mills Lab
   source /home/remills/apps/scripts/deploy.sh
   ```
   It is suggested to always add these settings in .bashrc rather than
   .bash\_profile, as the latter is only sourced in a log-in shell. Failure to
   do so might lead to unexpected bugs. Also, it is better to have a clean
   .bashrc to start with. Files with a "contaminated" PATH might lead to weird
   results.

2. Many modules provided are compiled against some libraries carried by
   Anaconda, so you must load one of the Anaconda Python module first.

   If you are mainly using Python 2, use "anaconda/2". Module "anaconda/3"
   provides Python 3 only. Both provide both Python 2 and 3, but the default
   version is different. Specific versions can be accessed through "python2"
   and "python3", respectively.

   Say you want to use Python 2, add the following line to your .bashrc file:
   ```
   module load anaconda/2
   ```

3. Then you can load modules on GuanLab, Axiom and Flux clusters. For example:
   ```
   module load picard/2.0.1
   ```
   Will load Picard 2.0.1. You can put them in .bashrc for automatic loading.
   Add "##PBS -V" in your PBS scripts to ensure your jobs also load these
   modules.


## Miscellaneous

1. Sometimes loading modules of Java programs may show:
   ```
   Module 'picard/2.0.1' conflicts with the currently loaded module(s) 'jre/1.7.0-80'
   ```
   This happens when the program requires at least Java 8 and you loaded
   Java 7. What you can do is to unload Java 7 and load Java 8:
   ```
   module unload jre/1.7.0-80 jdk/1.7.0-80
   module load jre/1.8.0-66
   ```
   Similarly, if you loaded Java 7 while some modules require Java 8, you will
   see:
   ```
   Module 'gatk/3.1' depends on one of the module(s) 'jre/1.7.0-80'
   ```
   What you can do is to unload Java 8 and load Java 7:
   ```
   module unload jre/1.8.0-66 jdk/1.8.0-66
   module load jre/1.7.0-80
   ```
