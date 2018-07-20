

Pod::Spec.new do |s|

  s.name         = "ColorfulWoodCategories"
  s.version      = "1.0.17"
  s.summary      = "Add NSString Regex"

  s.homepage     = "https://github.com/gs01md"

  s.license      = "MIT"

  s.author       = { "ColorfulWood" => "103377808@qq.com" }

  s.source       = { :git => "https://github.com/gs01md/ColorfulWoodCategories.git", :tag => "#{s.version}" }

  s.source_files = "ColorfulWoodCategories/ColorfulWoodCategories/CocoapodFiles/**/*"

  s.platform     = :ios, "8.2"

  s.frameworks   = 'UIKit'
  s.frameworks   = 'Foundation'

end
