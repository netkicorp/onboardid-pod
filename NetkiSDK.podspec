Pod::Spec.new do |s|
  s.name             = 'NetkiSDK'
  s.version          = '11.7.0-beta.19'
  s.summary          = 'NetkiSDK enables custom onboarding.'
  s.description      = 'Our NetkiSDK lets you create custom KYC onboarding in your app'
  s.homepage         = 'https://github.com/netkicorp/onboardid-ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Netki' => 'ops@netki.com' }
  s.source           = { :git => 'https://github.com/netkicorp/onboardid-ios.git', :tag => s.version.to_s }
  s.social_media_url = 'https://twitter.com/NetkiCorp'

  s.ios.deployment_target = '17.0'

  s.source_files = 'NetkiSDK/Classes/**/*.swift'

  s.resource_bundles = {
    'NetkiSDK' => ['NetkiSDK/Assets/**/*', 'NetkiSDK/Classes/**/*.storyboard']
  }

  s.resources = ["NetkiSDK/Assets/**/*", "NetkiSDK/Classes/**/*.storyboard"]
  
  s.dependency 'Sentry', '~> 8.46.0'
  s.dependency 'NFCPassportReader', '~> 2.3.0'
  s.dependency 'NetkiCV'

  s.pod_target_xcconfig = { 'NSCameraUsageDescription' => 'Capture ID' }
end
