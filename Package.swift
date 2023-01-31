// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Signer",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "Signer",
            targets: ["Signer"]),
    ],
    targets: [
        .binaryTarget(
            name: "Signer",
            path: "Signer.xcframework"
        ),
    ]
)
