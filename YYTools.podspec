

# /************ 配置说明 ***************/


Pod::Spec.new do |s|
    s.name         = 'YYTools'
    s.version      = '1.0.0'
    s.summary      = 'a YYTools component'
    s.homepage     = 'https://github.com/ArrQ/YYTools'
    s.license      = 'MIT'
    s.authors      = { 'ArrQ' => '2206506738@qq.com' }
    s.platform     = :ios, '8.0'
    s.framework = "UIKit","Foundation"
    s.source       = { :git => 'https://github.com/ArrQ/YYTools.git', :tag => s.version }
    s.requires_arc = true
    s.source_files = 'YYTools/YYTools/YYTools/YYTools.h'
    s.subspec 'YYNoticeViewTool' do |ss|
        ss.ios.deployment_target = '8.0'
        ss.source_files = 'YYTools/YYTools/YYTools/YYNoticeViewTool/YYNoticeViewTool.h','YYTools/YYTools/YYTools/YYNoticeViewTool/**/**.{h,m}'
    end
   
end

# /************ 版本更新维护 ***************/


# git tag 1.0.1

# git push origin 1.0.1

# pod lib lint wyyCommon.podspec --allow-warnings

# pod trunk push wyyCommon.podspec --allow-warnings
# pod lib lint wyyCommon.podspec --verbose(依赖库) 有错误提示时 用这个吧，记得添加依赖
# 如果有引用到库framwork或C语言库的话必须使用

# pod spec lint wyyCommon.podspec --use-libraries // 验证

# pod trunk push wyyCommon.podspec --use-libraries           // 上传

# pod trunk push YYCommon.podspec --allow-warnings --use-libraries   // 依赖库的时候用嘛



