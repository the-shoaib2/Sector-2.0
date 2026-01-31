# LAB_EV

A cross-platform OpenGL application built with FreeGLUT.

## Quick Start

## Quick Start

### Build and Run

**VS Code (Recommended):**
```bash
code .
# Press F5 to build and run
```

**Command Line:**
```bash
glut build          # Build project
glut run            # Build and run
glut watch          # Hot reload mode
```

**That's it!** The `glut` CLI handles all compilation, linking, and dependency management automatically.

## Controls

- **+** - Increase shape detail
- **-** - Decrease shape detail
- **q** or **ESC** - Quit

## Adding Components

Generate new C++ components:

```bash
glut add Player
glut add Enemy
glut add GameEngine
```

This creates `.h` and `.cpp` files automatically.

## Project Structure

```
LAB_EV/
├── main.cpp                # Main application
├── glut.json               # Project configuration
├── .vscode/                # VS Code settings
└── build/                  # Build output (auto-generated)
```

See [`STRUCTURE.md`](STRUCTURE.md) for detailed folder structure.

## Available Commands

| Command | Description |
|---------|-------------|
| `glut build` | Compile project |
| `glut build --release` | Optimized build |
| `glut run` | Build and execute |
| `glut watch` | Auto-rebuild on changes |
| `glut add <name>` | Generate component |
| `glut clean` | Remove build artifacts |
| `glut status` | Show project info |

## Development

### Debug Build (Default)
```bash
glut build
```
- Includes debug symbols
- No optimizations
- Faster compilation

### Release Build
```bash
glut build --release
```
- Full optimizations (`-O3`)
- Stripped symbols
- Smaller binary

## Troubleshooting

### Build Fails
- Check for syntax errors
- Ensure all includes exist
- Run `glut clean` and rebuild

### Application Won't Start (Windows)
- Verify `build/freeglut.dll` exists
- Run `glut setup` if DLL is missing

### Black Window
- Check OpenGL initialization
- Verify display callback is set

## Documentation

- [Command Reference](https://github.com/the-shoaib2/freeglut/tree/main/docs/commands)
- [Folder Structure](STRUCTURE.md)
- [FreeGLUT Documentation](http://freeglut.sourceforge.net/)

## License

MIT
