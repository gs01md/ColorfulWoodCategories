

Pod::Spec.new do |s|

  s.name         = "ColorfulWoodCategories"
  s.version      = "1.0.3"
  s.summary      = "User Interface Design."

  s.homepage     = "https://github.com/gs01md"

  s.license      = "MIT"

  s.author       = { "ColorfulWood" => "103377808@qq.com" }

  s.source       = { :git => "https://github.com/gs01md/ColorfulWoodCategories.git", :tag => "#{s.version}" }

  s.source_files = "ColorfulWoodCategories/ColorfulWoodCategories/**/*"

  s.platform     = :ios, "8.0"

  s.frameworks   = 'UIKit'

end
