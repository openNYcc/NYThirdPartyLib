#
# Be sure to run `pod lib lint NYThirdPartyLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'NYThirdPartyLib'
  s.version          = '0.8.0'
  s.summary          = 'A short description of NYThirdPartyLib.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/openNYcc/NYThirdPartyLib'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '455858242@qq.com' => '455858242@qq.ccom' }
  s.source           = { :git => 'https://github.com/openNYcc/NYThirdPartyLib.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  
  s.ios.deployment_target = '9.0'

  s.source_files = 'NYThirdPartyLib/Classes/**/*'
  #设置 非ARC
  non_arc_files = 'NYThirdPartyLib/Classes/Json/*'
  s.subspec 'no-arc' do |mrc|
    mrc.source_files = non_arc_files
    mrc.requires_arc = false
  end
  
  # s.resource_bundles = {
  #   'NYThirdPartyLib' => ['NYThirdPartyLib/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
