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
    dependencies: [
        // AppierAds links (does not embed) the Aistra device-signal SDK, so its
        // SPM product must be resolved and linked alongside AppierAds.
        .package(url: "https://github.com/appier/ads-aistra-ios", exact: "2.0.1")
    ],
    targets: [
        .binaryTarget(
            name: "AppierAds",
            path: "AppierAds.xcframework"
        ),
        .target(
            name: "AppierAdsWrapper",
            dependencies: [
                .target(name: "AppierAds"),
                .product(name: "Aistra", package: "ads-aistra-ios")
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
