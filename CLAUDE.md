# OnboardID Pod

## Project Overview
CocoaPods distribution repository for the OnboardID iOS SDK. Contains the podspec and pre-built XCFramework for iOS SDK distribution.

## Tech Stack
- CocoaPods
- XCFramework (pre-built binary)

## Project Structure
```
onboardid-pod/
├── NetkiSDK.podspec       # Pod specification
├── NetkiSDK.xcframework/  # Pre-built iOS framework
│   ├── ios-arm64/         # Device build
│   └── ios-arm64_x86_64-simulator/  # Simulator build
└── .github/workflows/     # Release automation
```

## Key Commands
```bash
# Lint the podspec
pod lib lint NetkiSDK.podspec --allow-warnings

# Push to CocoaPods trunk
pod trunk push NetkiSDK.podspec --allow-warnings
```

## Branch Strategy
- `master` is the main branch (different from other repos)
- Version-specific snapshot branches (e.g., `11.0.0-snapshot`)

## Release Workflow
1. New iOS SDK release triggers GitHub Action
2. XCFramework is built from onboardid-ios
3. Framework is copied to this repo
4. Podspec version is updated
5. Pushed to CocoaPods trunk

## Cross-Platform Context
This is a **distribution-only** repository. Related repositories:
- **onboardid-ios**: Source code for the iOS SDK
- **onboardid-flutter**: Flutter bridge (depends on this pod)
- **onboardid-react-native**: React Native bridge (depends on this pod)
- **myverify-ios**: Demo/flag app (depends on this pod)
- **mobile-platform-hub**: Central coordination repo

## Commit & Branch Rules
- **No AI references in commits**: Never include "Claude", "AI", or similar in commit messages
- **Branch naming**: Use consistent branch names across all repos for related changes
- **Commit style**: Use conventional commits (feat:, fix:, chore:, docs:)
