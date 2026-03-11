## 官方编译说明：
编译说明：
https://developer.trustwallet.com/developer/wallet-core/developing-the-library/building

增加新链： https://developer.trustwallet.com/developer/wallet-core/newblockchain/newevmchain#steps
bitverse 后端配置规范：
 1)  evm链： coinId=10000000 + chainId
 2)  非evm链: coinId和chainId都是自定义非行业标准，未避免冲突
    (1) 已经定义了coinId 但还没有chainId的，chainId = 10000000 + coinId
    (2) 新增未定义coindId的，coinId从20000001开始，chainId=10000000 + coinId

命令：
## MacOS
./tools/install-sys-dependencies-mac

arch -arm64 brew install emscripten
arch -arm64 brew install jq
gem install fastlane

修改CMakeLists.txt: 
set(BOOST_ROOT "/opt/homebrew/Cellar/boost/1.82.0_1")

## 执行命令
```
./bootstrap.sh 
./tools/generate-files
```

## android
```
sh tools/generate-files android
sh tools/android-build
sh tools/android-release
```


## ios 编译动态库
```
sh tools/generate-files ios
sh tools/ios-xcframework
sh tools/ios-xcframework-release
```

## ios动态库打包
创建 Frameworks目录，将swift/build/下的 WalletCore.xcframework和SwiftProtobuf.xcframework两个目录拷贝进去，然后对Frameworks目录压缩wallet_core_common-{xxx}.zip

xxx是版本号

## ios动态库上传
1)登录  https://github.com/Bitverse-Pte/wallet-core/releases 创建Release 并上传打包的文件，获取文件地址
2)然后登录 http://bitvers-manager-tools.bitverse.green/bitbase/app/ios/specs/-/tree/master/TCWalletCoreCommon 创建新版本，按照之前的模版操作并更新source地址即可

## 项目中依赖更新
1) trust_wallet和bw_wallet_core两个项目的ios下的podspec更新版本号
2） (arch -arm64) pod update TCWalletCoreCommon --repo-update
3） (arch -arm64) pod install --repo-update
4）将 build/trustwalletcore.aar 文件拷贝到 bitverse项目的android/libs目录下 和 trust_wallet项目的 android/libs目录下



