

# /************ 配置说明 ***************/


Pod::Spec.new do |s|
    s.name         = 'YYTooling'
    s.version      = '1.0.5'
    s.summary      = 'a YYTooling component'
    s.description  = <<-DESC 
                          YYTooling 是一个用于保存一些常用工具类的工具
                   DESC
    s.homepage     = 'https://github.com/ArrQ/YYTools'
    s.license      = 'MIT'
    s.authors      = { 'ArrQ' => '2206506738@qq.com' }
    s.platform     = :ios, '8.0'
    s.framework = "UIKit","Foundation"
    s.source       = { :git => 'https://github.com/ArrQ/YYTools.git', :tag => s.version }
    s.requires_arc = true
    s.source_files = 'YYToolOne/YYTools/YYTooling/YYTools.h'
     s.subspec 'YYNoticeViewTool' do |ss|
        ss.ios.deployment_target = '8.0'
        ss.source_files = 'YYToolOne/YYTools/YYTooling/YYNoticeViewTool/YYNoticeViewTool.h','YYToolOne/YYTools/YYTooling/YYNoticeViewTool/**/**.{h,m}'
    end
     s.subspec 'YYYYIconImgManager' do |ss|
        ss.ios.deployment_target = '8.0'
        ss.source_files = 'YYToolOne/YYTools/YYTooling/YYYYIconImgManager/YYIconImgManagerHeader.h','YYToolOne/YYTools/YYTooling/YYYYIconImgManager/**/**.{h,m}'
    end
     s.subspec 'YYBaseVC' do |ss|
        ss.ios.deployment_target = '8.0'
        ss.source_files = 'YYToolOne/YYTools/YYTooling/YYBaseVC/YYBaseVCHeader.h','YYToolOne/YYTools/YYTooling/YYBaseVC/**/**.{h,m}'
    end
    
end

# /************ 版本更新维护 ***************/


# git tag 1.0.1

# git push origin 1.0.1

# pod lib lint YYTooling.podspec --allow-warnings

# pod trunk push YYTooling.podspec --allow-warnings
# pod lib lint YYTooling.podspec --verbose(依赖库) 有错误提示时 用这个吧，记得添加依赖
# 如果有引用到库framwork或C语言库的话必须使用

# pod spec lint YYTooling.podspec --use-libraries // 验证

# pod trunk push YYTooling.podspec --use-libraries           // 上传

# pod trunk push YYTooling.podspec --allow-warnings --use-libraries   // 依赖库的时候用嘛



