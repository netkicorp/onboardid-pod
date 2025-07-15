Pod::Spec.new do |s|  
    s.name                    = 'NetkiSDK'
    s.version                 = '8.40.3'
    s.summary                 = 'NetkiSDK enables custom onboarding.'
    s.description             = 'Our NetkiSDK lets you create custom KYC onboarding in your app'
    s.homepage                = 'https://www.netki.com/'

    s.author                  = { 'Netki' => 'ops@netki.com' }
    s.license                 = { :type => '', :file => 'LICENSE' }

    s.platform                = :ios
    s.source                  = { :git => 'https://github.com/netkicorp/onboardid-pod.git' }

    s.ios.deployment_target   = '17.0'
    s.ios.vendored_frameworks = 'NetkiSDK.xcframework'
    s.dependency 'Sentry', '~> 8.46.0'
end
