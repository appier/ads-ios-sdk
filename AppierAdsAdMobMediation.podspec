require 'json'

package = JSON.parse(File.read(File.join(__dir__, 'version_admob_mediation.json')))

Pod::Spec.new do |s|
  s.name         = "AppierAdsAdMobMediation"
  s.version      = package['version'][1..-1]
  s.summary      = "Appier adapter used for mediation with the Google Mobile Ads SDK"
  s.homepage     = "https://www.appier.com"
  s.license    = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Appier" => "appier-ssp-dev@appier.com" }
  s.platform     = :ios, '12.0'
  s.source       = { :git => "https://github.com/appier/ads-ios-sdk.git", :tag => "admob-mediation-#{package['version']}"}
  s.ios.vendored_frameworks = 'AppierAdsAdMobMediation.xcframework'
  s.frameworks = 'Foundation'
  s.requires_arc = true
  s.static_framework = true
  s.user_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.readme = 'https://github.com/appier/ads-ios-sdk/blob/main/README_ADMOB_MEDIATION.md'

  s.dependency "Google-Mobile-Ads-SDK", "~> 9.5"
  s.dependency "AppierAds", "~> 1.2"
end
