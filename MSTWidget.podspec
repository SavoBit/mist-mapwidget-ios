Pod::Spec.new do |s|
    s.name         = "MSTWidget"
    s.homepage     = "https://github.com/mistsys/mist-mapwidget-ios"
    s.license      = { :type => 'Copyright', :text => 'Copyright 2017 by Mist Systems Inc. All rights reserved.' }
    s.version      = "0.0.1"
    s.summary      = "Mist Map Widget"
    s.description  = <<-DESC
Mist Map Widget 
DESC
    s.author                = { "Mist Systems" => "sdksupport@mist.com" }
    s.social_media_url      = 'https://twitter.com/mistsystems'
    s.platform              = :ios, "9.3"
    s.ios.deployment_target = "9.3"
    s.source                = { :git => "https://github.com/mistsys/mist-mapwidget-ios.git", :tag => '0.0.1' }
    s.ios.vendored_frameworks = 'Framework/MSTWidget.framework'
    s.requires_arc          = true
    s.dependency "MistSDK", "~> 1.1.0"
end