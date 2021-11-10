# Vscode C++ debug example

Simple repository that contains the setup needed to debug a C++ file with both the [GDB](https://www.gnu.org/software/gdb/)
and [LLDB](https://lldb.llvm.org/) debuggers. More information can be found [here](https://github.com/microsoft/vscode-cpptools/issues/5415).

## Clang-tidy

To use clang-tidy you currently have to install the [clang-tidy](https://marketplace.visualstudio.com/items?itemName=notskm.clang-tidy) extension
since this feature has not yet been implemented in the [C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) extension (see [vscode-cpptools/issues/2908](https://github.com/microsoft/vscode-cpptools/issues/2908)).

## Catkin workspace

You have to install the [catkin-tools](https://marketplace.visualstudio.com/items?itemName=betwo.b2-catkin-tools) extension
to get all the intellisense, linting and formatting features to work. After you enabled this extension you have to add the following
settings to your `settings.json` file:

```json
"catkin_tools.mergedCompileCommandsJsonPath": "${workspaceFolder}/compile_commands.json",
"catkin_tools.recursiveHeaderParsingEnabled": true,
"C_Cpp.default.configurationProvider": "b2.catkin_tools",
```

You further have to set the `DCMAKE_EXPORT_COMPILE_COMMANDS` and `DCMAKE_BUILD_TYPE` flags your catkin workspace config:

```bash
catkin config --cmake-args -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_BUILD_TYPE=Debug
```

For more information see [the extension documentation](https://github.com/betwo/vscode-catkin-tools).
[here](https://github.com/microsoft/vscode-cpptools/issues/5415) and [here](https://code.visualstudio.com/docs/cpp/config-linux).

## ROS packages

If you also want to debug ROS packages you can install the [vscode-ros](https://marketplace.visualstudio.com/items?itemName=ms-iot.vscode-ros).
