// swift-tools-version:5.7.1
import PackageDescription

let package = Package(
    name: "AppierAds",
    platforms: [.iOS(.v12)],
    products: [
        .library(
            name: "AppierAds",
            targets: ["AppierAdsWrapper"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "AppierAds",
            path: "AppierAds.xcframework"
        ),
        .target(
            name: "AppierAdsWrapper",
            dependencies: [
                .target(name: "AppierAds")
            ],
            path: "Sources/AppierAdsWrapper",
            linkerSettings: [
                .linkedFramework("Foundation"),
                .linkedFramework("UIKit"),
                .linkedFramework("StoreKit"),
                .linkedFramework("AdSupport"),
                .linkedFramework("AppTrackingTransparency")
            ]
        )
    ]
)
