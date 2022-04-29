require 'json'

package = JSON.parse(File.read(File.join(__dir__, 'version_ads_sdk.json')))

Pod::Spec.new do |s|
  s.name         = "AppierAds"
  s.version      = package['version'][1..-1]
  s.summary      = "AppierAds is the library for Appier Enterprise Solutions."
  s.homepage     = "https://www.appier.com"
  # s.documentation_url = "https://docs.aiqua.appier.com/docs"
  s.license    = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Appier" => "justin.kuo@appier.com" }
  s.platform     = :ios, '12.0'
  s.source       = { :git => "https://github.com/appier/ads-ios-sdk.git", :tag => "ads-sdk-#{package['version']}"}
  s.ios.vendored_frameworks = 'AppierAds.xcframework'
  s.frameworks = 'Foundation', 'UIKit', 'StoreKit', 'AdSupport', 'AppTrackingTransparency'
  s.requires_arc = true
end
