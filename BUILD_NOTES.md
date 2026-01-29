# Tutka 2 Build Notes – Current Status

**Project:** [Tutka 2 / Tutankhamun branch](https://github.com/findsp/tutka2-tutankhamun)  
**Base:** Tutka 1.1.3 with modernized Qt5/6 support, enhanced UI/UX, and streamlined track automation.

---

## Major Updates Since Tutka 1.1.3

### 1. Qt Modernization & Cross-Version Compatibility
- Full transition to **Qt5/6-compatible syntax**; legacy `SIGNAL()/SLOT()` completely replaced.
- `QTimer::singleShot` and similar deprecated calls updated.
- Conditional macros (`QT_NO_DEPRECATED_WARNINGS`) added to suppress obsolete warnings.
- **Result:** Clean compile under Qt 5.15 → Qt 6.5, no warnings on modern Debian/Ubuntu builds.

### 2. Project Structure / Source Tree
- Repo reorganized to separate core, plugins scaffolding, and user manual:


/tutka2
/core # main tracker engine & GUI
/plugins # optional/possible future expansion (currently scaffolding)
/user-manual # full README.md auto-displayed on GitHub

- Root `README.md` added for GitHub auto-rendering; `tutka-manual.md` preserved for offline reference.
- **Files:** ~350 files, fully preserved + modernized structure.

### 3. Build System Enhancements
- `qmake` remains the primary build system; `.pro` file updated for modular components.
- Supports:
- Multi-core compilation (`make -j$(nproc)`)
- SQLite linkage for internal storage
- Build produces fully functional tracker without requiring optional plugin libraries.

### 4. Color Theming & UI Enhancements
- GTK/Qt style compatibility for native Linux look.
- Dynamic theme switching (light/dark/custom palettes).
- Track/volume bar colors configurable in UI.
- Streamlined layout for transport, track panels, and inspector.

### 5. Drawable MIDI Lane Automation
- Interactive track lanes to display MIDI/automation curves.
- Supports point/line/curve drawing for automation editing.
- Prepares system for future linking to internal track logic.

### 6. UI & UX Streamlining
- Faster navigation between patterns/scenes.
- Reduced boilerplate for track panels.
- Optimized window/layout behavior for responsive resizing.

---

## Build Instructions (CTP-EOS / Debian / Ubuntu 22.04+)

```bash
# Install dependencies
sudo apt install qtbase5-dev qt5-qmake libqt5sql5-sqlite build-essential libasound2-dev

# Clone & build
git clone https://github.com/findsp/tutka2-tutankhamun.git
cd tutka2-tutankhamun

# Standard Qt build
qmake tutka2.pro
make -j$(nproc)

# Run the tracker
./tutka2
