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
        // AppierAds links (does not embed) the Argus device-signal SDK, so its
        // SPM product must be resolved and linked alongside AppierAds.
        .package(url: "https://github.com/appier/ads-argus-ios", exact: "1.0.0")
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
                .product(name: "Argus", package: "ads-argus-ios")
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
