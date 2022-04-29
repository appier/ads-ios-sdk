require 'json'

package = JSON.parse(File.read(File.join(__dir__, 'version_admob_mediation.json')))

Pod::Spec.new do |s|
  s.name         = "AppierAdsAdMobMediation"
  s.version      = package['version'][1..-1]
  s.summary      = "AppierAdsAdMobMediation is the library for Appier Enterprise Solutions."
  s.homepage     = "https://www.appier.com"
  # s.documentation_url = "https://docs.aiqua.appier.com/docs"
  s.license    = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Appier" => "justin.kuo@appier.com" }
  s.platform     = :ios, '12.0'
  s.source       = { :git => "https://github.com/appier/ads-ios-sdk.git", :tag => "admob-mediation-#{package['version']}"}
  s.ios.vendored_frameworks = 'AppierAdsAdMobMediation.xcframework'
  s.frameworks = 'Foundation'
  s.requires_arc = true
  s.static_framework = true
  s.readme = 'https://github.com/appier/ads-ios-sdk/blob/main/README_ADMOB_MEDIATION.md'

  s.dependency "Google-Mobile-Ads-SDK", "~> 9.3.0"
  s.dependency "AppierAds", "~> 0.1.8"
end
