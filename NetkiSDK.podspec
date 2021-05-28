Pod::Spec.new do |s|  
    s.name                    = 'NetkiSDK'
    s.version                 = '5.4.1'
    s.summary                 = 'NetkiSDK framework.'
    s.homepage                = 'https://www.netki.com/'

    s.author                  = { 'Netki' => 'hello@example.com' }
    s.license                 = { :type => '', :file => 'LICENSE' }

    s.platform                = :ios
    s.source                  = { :git => 'ssh://bitbucket.org/eimai/ios-pod.git' }

    s.ios.deployment_target   = '12.0'
    s.ios.vendored_frameworks = 'netkisdk_ios.framework'
    s.ios.dependency 'Amplitude-iOS', '~> 4.10'
    s.ios.dependency 'SVProgressHUD'
end 
