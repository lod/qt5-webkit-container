## About
This is a small utility for providing a WebKit container targetted towards use on a embedded system via the framebuffer.

It can be considered a borderless/frameless/non-navigatable browser.

## Compilation

### Dependencies
```
apt-get install make g++ qt5-qmake qt5-default libqt5webkit5-dev gstreamer1.0-plugins-base gstreamer1.0-tools gstreamer1.0-x
```

### Compile

As a QT project compilation follows the standard QT pattern:

```
qmake # Generate Makefile
make  # Compile the project
```

### Debian Package

Native format package metadata is supplied to aid rolling your own package.

The standard build tools are supported:
```
debuild -uc -us
```

