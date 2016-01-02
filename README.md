# qt_practicum
Qt independent studies course
The main Project in this repo is in the kcm_ufw folder
## KCM-UFW

### Dependencies
The following command should pull in all the dependencies you need on a Ubuntu/Debian system to build anything in this repo:
`sudo apt-get install libkf5widgetsaddons-dev libkf5kcmutils-dev kio-dev libkf5i18n-dev qtbase5-dev libkf5auth-dev libkf5configwidgets-dev libkf5coreaddons-dev cmake-extras extra-cmake-modules`

### Building kcm-ufw
To build the main kcm-ufw project, open a command prompt and type:
` sudo cmake CMakeLists.txt -DKDE_INSTALL_USE_QT_SYS_PATHS=ON -DCMAKE_INSTALL_PREFIX:PATH=/usr`
`sudo make install`

Then type:
`kbuildsycoca5`
