Preparation
First thing first, there are two things required (really need it indeed!).

CMake: This is because dlib was developed in C based programming language, so it needs this program to use it. It can be found in the link https://cmake.org/download/. To make sure matching with your operation system, in our case is Windows 10 64-bit version.
how to install dlib in windows 10 for python
selected as your operation system being used

![image](https://user-images.githubusercontent.com/84392923/194616505-cc15bce8-1384-4326-ad5e-38e993d9e5d5.png)

Visual studio: As I mentioned before, dlib is C based programming language. Another thing that really need is compiler. The Visual studio can be downloaded in the link https://visualstudio.microsoft.com/visual-cpp-build-tools/. After finishing the installation, you need to install additional packages for C, C++ programming, which is Packages CMake tools for Windows
how to install dlib in windows 10 for python
make sure you selected in red box

Note
Sometimes we need manage the Windows PATH environment for CMake. (If you already added during installation, you can skip this section).

For checking whether the PATH already added or not, you can go to Environment Variables on Windows by go to This PC > Properties > Advance system settings. Then, go to Tab Advanced and click on Environment Variables.

Another windows will pop-up and click Edit…

![image](https://user-images.githubusercontent.com/84392923/194616556-172c6c99-ed0a-4206-914b-881956e33b3e.png)


how to install dlib in windows 10 for python
If you are unable to find CMake path, you should add the CMake installed directory like image below.

![image](https://user-images.githubusercontent.com/84392923/194616598-a18c7363-3a8c-46a2-8ac5-39371362de28.png)

how to install dlib in windows 10 for python
Install
Everything is looking good so far. Now we can install dlib into our python environment. First of all, you need to install CMake library.

pip install cmake
Then, you can install dlib library using pip install.

pip install dlib
After passing enter, you laptop or desktop will run the C, C++ Compiler. If you got something like image below, you would be fine.


C, C++ is being used for program complying
how to install dlib ติดตั้ง dlib windows 10
boom! you got this!
After these all, you will get dilb installed on your Windows 10 by not using conda install compiler.
