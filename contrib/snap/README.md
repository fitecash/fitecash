# Fitecash Snap Packaging

Commands for building and uploading a Fitecash Core Snap to the Snap Store. Anyone on amd64 (x86_64), arm64 (aarch64), or i386 (i686) should be able to build it themselves with these instructions. This would pull the official Fitecash binaries from the releases page, verify them, and install them on a user's machine.

## Building Locally
```
sudo apt install snapd
sudo snap install --classic snapcraft
sudo snapcraft
```

### Installing Locally
```
snap install \*.snap --devmode
```

### To Upload to the Snap Store
```
snapcraft login
snapcraft register fitecash-core
snapcraft upload \*.snap
sudo snap install fitecash-core
```

### Usage
```
fitecash-unofficial.cli # for fitecash-cli
fitecash-unofficial.d # for fitecashd
fitecash-unofficial.qt # for fitecash-qt
fitecash-unofficial.test # for test_fitecash
fitecash-unofficial.tx # for fitecash-tx
```

### Uninstalling
```
sudo snap remove fitecash-unofficial
```