#pragma once

// 转字符串
#define LN_PP_STRING_IMPL(x)              #x
#define LN_PP_STRING(x)                   LN_PP_STRING_IMPL(x)

// 字符连接
#define LN_PP_STR_CAT_RES(p, res)         res
#define LN_PP_STR_CAT_IMPL(a, b)          LN_PP_STR_CAT_RES(~, a##b)
#define LN_PP_STR_CAT(a, b)               LN_PP_STR_CAT_IMPL(a, b)

// 宏函数展开
#define LN_PP_EXPAND(x)                   x

#define LN_PP_ARGS0(arg, ...)             arg

// clang-format off
#define LN_PP_CAL_ARGS_SIZE_IMPL(e0, e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20, e21, e22, e23, e24, e25, e26, e27, e28, e29, e30, e31, e32, e33, e34, e35, e36, e37, e38, e39, e40, e41, e42, e43, e44, e45, e46, e47, e48, e49, e50, e51, e52, e53, e54, e55, e56, e57, e58, e59, e60, e61, e62, e63, e64, SIZE, ...) \
									SIZE
#define LN_PP_ARGS_AUGMENTER(...) 	unused, __VA_ARGS__
#define LN_PP_ARGS_EXPAND(...)   	LN_PP_EXPAND(LN_PP_CAL_ARGS_SIZE_IMPL(__VA_ARGS__, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0))
// clang-format on

#define LN_PP_CAL_ARGS_SIZE(...)          LN_PP_ARGS_EXPAND(LN_PP_ARGS_AUGMENTER(__VA_ARGS__))

// 宏函数重载
#define LN_PP_OVER_LOAD(prefix, ...)      LN_PP_STR_CAT(prefix, LN_PP_CAL_ARGS_SIZE(__VA_ARGS__))

#define LN_PP_ENUM_GENERATOR_I(prefix, i) prefix##_##i = i

#define LN_PP_ENUM_GENERATOR0(prefix)     LN_PP_ENUM_GENERATOR_I(prefix, 0)
#define LN_PP_ENUM_GENERATOR1(prefix)     LN_PP_ENUM_GENERATOR0(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 1)
#define LN_PP_ENUM_GENERATOR2(prefix)     LN_PP_ENUM_GENERATOR1(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 2)
#define LN_PP_ENUM_GENERATOR3(prefix)     LN_PP_ENUM_GENERATOR2(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 3)
#define LN_PP_ENUM_GENERATOR4(prefix)     LN_PP_ENUM_GENERATOR3(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 4)
#define LN_PP_ENUM_GENERATOR5(prefix)     LN_PP_ENUM_GENERATOR4(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 5)
#define LN_PP_ENUM_GENERATOR6(prefix)     LN_PP_ENUM_GENERATOR5(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 6)
#define LN_PP_ENUM_GENERATOR7(prefix)     LN_PP_ENUM_GENERATOR6(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 7)
#define LN_PP_ENUM_GENERATOR8(prefix)     LN_PP_ENUM_GENERATOR7(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 8)
#define LN_PP_ENUM_GENERATOR9(prefix)     LN_PP_ENUM_GENERATOR8(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 9)
#define LN_PP_ENUM_GENERATOR10(prefix)    LN_PP_ENUM_GENERATOR9(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 10)
#define LN_PP_ENUM_GENERATOR11(prefix)    LN_PP_ENUM_GENERATOR10(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 11)
#define LN_PP_ENUM_GENERATOR12(prefix)    LN_PP_ENUM_GENERATOR11(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 12)
#define LN_PP_ENUM_GENERATOR13(prefix)    LN_PP_ENUM_GENERATOR12(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 13)
#define LN_PP_ENUM_GENERATOR14(prefix)    LN_PP_ENUM_GENERATOR13(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 14)
#define LN_PP_ENUM_GENERATOR15(prefix)    LN_PP_ENUM_GENERATOR14(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 15)
#define LN_PP_ENUM_GENERATOR16(prefix)    LN_PP_ENUM_GENERATOR15(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 16)
#define LN_PP_ENUM_GENERATOR17(prefix)    LN_PP_ENUM_GENERATOR16(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 17)
#define LN_PP_ENUM_GENERATOR18(prefix)    LN_PP_ENUM_GENERATOR17(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 18)
#define LN_PP_ENUM_GENERATOR19(prefix)    LN_PP_ENUM_GENERATOR18(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 19)
#define LN_PP_ENUM_GENERATOR20(prefix)    LN_PP_ENUM_GENERATOR19(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 20)
#define LN_PP_ENUM_GENERATOR21(prefix)    LN_PP_ENUM_GENERATOR20(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 21)
#define LN_PP_ENUM_GENERATOR22(prefix)    LN_PP_ENUM_GENERATOR21(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 22)
#define LN_PP_ENUM_GENERATOR23(prefix)    LN_PP_ENUM_GENERATOR22(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 23)
#define LN_PP_ENUM_GENERATOR24(prefix)    LN_PP_ENUM_GENERATOR23(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 24)
#define LN_PP_ENUM_GENERATOR25(prefix)    LN_PP_ENUM_GENERATOR24(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 25)
#define LN_PP_ENUM_GENERATOR26(prefix)    LN_PP_ENUM_GENERATOR25(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 26)
#define LN_PP_ENUM_GENERATOR27(prefix)    LN_PP_ENUM_GENERATOR26(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 27)
#define LN_PP_ENUM_GENERATOR28(prefix)    LN_PP_ENUM_GENERATOR27(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 28)
#define LN_PP_ENUM_GENERATOR29(prefix)    LN_PP_ENUM_GENERATOR28(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 29)
#define LN_PP_ENUM_GENERATOR30(prefix)    LN_PP_ENUM_GENERATOR29(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 30)
#define LN_PP_ENUM_GENERATOR31(prefix)    LN_PP_ENUM_GENERATOR30(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 31)
#define LN_PP_ENUM_GENERATOR32(prefix)    LN_PP_ENUM_GENERATOR31(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 32)
#define LN_PP_ENUM_GENERATOR33(prefix)    LN_PP_ENUM_GENERATOR32(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 33)
#define LN_PP_ENUM_GENERATOR34(prefix)    LN_PP_ENUM_GENERATOR33(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 34)
#define LN_PP_ENUM_GENERATOR35(prefix)    LN_PP_ENUM_GENERATOR34(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 35)
#define LN_PP_ENUM_GENERATOR36(prefix)    LN_PP_ENUM_GENERATOR35(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 36)
#define LN_PP_ENUM_GENERATOR37(prefix)    LN_PP_ENUM_GENERATOR36(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 37)
#define LN_PP_ENUM_GENERATOR38(prefix)    LN_PP_ENUM_GENERATOR37(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 38)
#define LN_PP_ENUM_GENERATOR39(prefix)    LN_PP_ENUM_GENERATOR38(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 39)
#define LN_PP_ENUM_GENERATOR40(prefix)    LN_PP_ENUM_GENERATOR39(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 40)
#define LN_PP_ENUM_GENERATOR41(prefix)    LN_PP_ENUM_GENERATOR40(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 41)
#define LN_PP_ENUM_GENERATOR42(prefix)    LN_PP_ENUM_GENERATOR41(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 42)
#define LN_PP_ENUM_GENERATOR43(prefix)    LN_PP_ENUM_GENERATOR42(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 43)
#define LN_PP_ENUM_GENERATOR44(prefix)    LN_PP_ENUM_GENERATOR43(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 44)
#define LN_PP_ENUM_GENERATOR45(prefix)    LN_PP_ENUM_GENERATOR44(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 45)
#define LN_PP_ENUM_GENERATOR46(prefix)    LN_PP_ENUM_GENERATOR45(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 46)
#define LN_PP_ENUM_GENERATOR47(prefix)    LN_PP_ENUM_GENERATOR46(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 47)
#define LN_PP_ENUM_GENERATOR48(prefix)    LN_PP_ENUM_GENERATOR47(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 48)
#define LN_PP_ENUM_GENERATOR49(prefix)    LN_PP_ENUM_GENERATOR48(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 49)
#define LN_PP_ENUM_GENERATOR50(prefix)    LN_PP_ENUM_GENERATOR49(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 50)
#define LN_PP_ENUM_GENERATOR51(prefix)    LN_PP_ENUM_GENERATOR50(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 51)
#define LN_PP_ENUM_GENERATOR52(prefix)    LN_PP_ENUM_GENERATOR51(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 52)
#define LN_PP_ENUM_GENERATOR53(prefix)    LN_PP_ENUM_GENERATOR52(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 53)
#define LN_PP_ENUM_GENERATOR54(prefix)    LN_PP_ENUM_GENERATOR53(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 54)
#define LN_PP_ENUM_GENERATOR55(prefix)    LN_PP_ENUM_GENERATOR54(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 55)
#define LN_PP_ENUM_GENERATOR56(prefix)    LN_PP_ENUM_GENERATOR55(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 56)
#define LN_PP_ENUM_GENERATOR57(prefix)    LN_PP_ENUM_GENERATOR56(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 57)
#define LN_PP_ENUM_GENERATOR58(prefix)    LN_PP_ENUM_GENERATOR57(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 58)
#define LN_PP_ENUM_GENERATOR59(prefix)    LN_PP_ENUM_GENERATOR58(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 59)
#define LN_PP_ENUM_GENERATOR60(prefix)    LN_PP_ENUM_GENERATOR59(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 60)
#define LN_PP_ENUM_GENERATOR61(prefix)    LN_PP_ENUM_GENERATOR60(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 61)
#define LN_PP_ENUM_GENERATOR62(prefix)    LN_PP_ENUM_GENERATOR61(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 62)
#define LN_PP_ENUM_GENERATOR63(prefix)    LN_PP_ENUM_GENERATOR62(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 63)
#define LN_PP_ENUM_GENERATOR64(prefix)    LN_PP_ENUM_GENERATOR63(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 64)
#define LN_PP_ENUM_GENERATOR65(prefix)    LN_PP_ENUM_GENERATOR64(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 65)
#define LN_PP_ENUM_GENERATOR66(prefix)    LN_PP_ENUM_GENERATOR65(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 66)
#define LN_PP_ENUM_GENERATOR67(prefix)    LN_PP_ENUM_GENERATOR66(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 67)
#define LN_PP_ENUM_GENERATOR68(prefix)    LN_PP_ENUM_GENERATOR67(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 68)
#define LN_PP_ENUM_GENERATOR69(prefix)    LN_PP_ENUM_GENERATOR68(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 69)
#define LN_PP_ENUM_GENERATOR70(prefix)    LN_PP_ENUM_GENERATOR69(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 70)
#define LN_PP_ENUM_GENERATOR71(prefix)    LN_PP_ENUM_GENERATOR70(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 71)
#define LN_PP_ENUM_GENERATOR72(prefix)    LN_PP_ENUM_GENERATOR71(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 72)
#define LN_PP_ENUM_GENERATOR73(prefix)    LN_PP_ENUM_GENERATOR72(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 73)
#define LN_PP_ENUM_GENERATOR74(prefix)    LN_PP_ENUM_GENERATOR73(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 74)
#define LN_PP_ENUM_GENERATOR75(prefix)    LN_PP_ENUM_GENERATOR74(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 75)
#define LN_PP_ENUM_GENERATOR76(prefix)    LN_PP_ENUM_GENERATOR75(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 76)
#define LN_PP_ENUM_GENERATOR77(prefix)    LN_PP_ENUM_GENERATOR76(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 77)
#define LN_PP_ENUM_GENERATOR78(prefix)    LN_PP_ENUM_GENERATOR77(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 78)
#define LN_PP_ENUM_GENERATOR79(prefix)    LN_PP_ENUM_GENERATOR78(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 79)
#define LN_PP_ENUM_GENERATOR80(prefix)    LN_PP_ENUM_GENERATOR79(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 80)
#define LN_PP_ENUM_GENERATOR81(prefix)    LN_PP_ENUM_GENERATOR80(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 81)
#define LN_PP_ENUM_GENERATOR82(prefix)    LN_PP_ENUM_GENERATOR81(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 82)
#define LN_PP_ENUM_GENERATOR83(prefix)    LN_PP_ENUM_GENERATOR82(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 83)
#define LN_PP_ENUM_GENERATOR84(prefix)    LN_PP_ENUM_GENERATOR83(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 84)
#define LN_PP_ENUM_GENERATOR85(prefix)    LN_PP_ENUM_GENERATOR84(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 85)
#define LN_PP_ENUM_GENERATOR86(prefix)    LN_PP_ENUM_GENERATOR85(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 86)
#define LN_PP_ENUM_GENERATOR87(prefix)    LN_PP_ENUM_GENERATOR86(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 87)
#define LN_PP_ENUM_GENERATOR88(prefix)    LN_PP_ENUM_GENERATOR87(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 88)
#define LN_PP_ENUM_GENERATOR89(prefix)    LN_PP_ENUM_GENERATOR88(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 89)
#define LN_PP_ENUM_GENERATOR90(prefix)    LN_PP_ENUM_GENERATOR89(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 90)
#define LN_PP_ENUM_GENERATOR91(prefix)    LN_PP_ENUM_GENERATOR90(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 91)
#define LN_PP_ENUM_GENERATOR92(prefix)    LN_PP_ENUM_GENERATOR91(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 92)
#define LN_PP_ENUM_GENERATOR93(prefix)    LN_PP_ENUM_GENERATOR92(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 93)
#define LN_PP_ENUM_GENERATOR94(prefix)    LN_PP_ENUM_GENERATOR93(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 94)
#define LN_PP_ENUM_GENERATOR95(prefix)    LN_PP_ENUM_GENERATOR94(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 95)
#define LN_PP_ENUM_GENERATOR96(prefix)    LN_PP_ENUM_GENERATOR95(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 96)
#define LN_PP_ENUM_GENERATOR97(prefix)    LN_PP_ENUM_GENERATOR96(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 97)
#define LN_PP_ENUM_GENERATOR98(prefix)    LN_PP_ENUM_GENERATOR97(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 98)
#define LN_PP_ENUM_GENERATOR99(prefix)    LN_PP_ENUM_GENERATOR98(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 99)
#define LN_PP_ENUM_GENERATOR100(prefix)   LN_PP_ENUM_GENERATOR99(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 100)
#define LN_PP_ENUM_GENERATOR101(prefix)   LN_PP_ENUM_GENERATOR100(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 101)
#define LN_PP_ENUM_GENERATOR102(prefix)   LN_PP_ENUM_GENERATOR101(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 102)
#define LN_PP_ENUM_GENERATOR103(prefix)   LN_PP_ENUM_GENERATOR102(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 103)
#define LN_PP_ENUM_GENERATOR104(prefix)   LN_PP_ENUM_GENERATOR103(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 104)
#define LN_PP_ENUM_GENERATOR105(prefix)   LN_PP_ENUM_GENERATOR104(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 105)
#define LN_PP_ENUM_GENERATOR106(prefix)   LN_PP_ENUM_GENERATOR105(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 106)
#define LN_PP_ENUM_GENERATOR107(prefix)   LN_PP_ENUM_GENERATOR106(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 107)
#define LN_PP_ENUM_GENERATOR108(prefix)   LN_PP_ENUM_GENERATOR107(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 108)
#define LN_PP_ENUM_GENERATOR109(prefix)   LN_PP_ENUM_GENERATOR108(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 109)
#define LN_PP_ENUM_GENERATOR110(prefix)   LN_PP_ENUM_GENERATOR109(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 110)
#define LN_PP_ENUM_GENERATOR111(prefix)   LN_PP_ENUM_GENERATOR110(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 111)
#define LN_PP_ENUM_GENERATOR112(prefix)   LN_PP_ENUM_GENERATOR111(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 112)
#define LN_PP_ENUM_GENERATOR113(prefix)   LN_PP_ENUM_GENERATOR112(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 113)
#define LN_PP_ENUM_GENERATOR114(prefix)   LN_PP_ENUM_GENERATOR113(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 114)
#define LN_PP_ENUM_GENERATOR115(prefix)   LN_PP_ENUM_GENERATOR114(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 115)
#define LN_PP_ENUM_GENERATOR116(prefix)   LN_PP_ENUM_GENERATOR115(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 116)
#define LN_PP_ENUM_GENERATOR117(prefix)   LN_PP_ENUM_GENERATOR116(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 117)
#define LN_PP_ENUM_GENERATOR118(prefix)   LN_PP_ENUM_GENERATOR117(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 118)
#define LN_PP_ENUM_GENERATOR119(prefix)   LN_PP_ENUM_GENERATOR118(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 119)
#define LN_PP_ENUM_GENERATOR120(prefix)   LN_PP_ENUM_GENERATOR119(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 120)
#define LN_PP_ENUM_GENERATOR121(prefix)   LN_PP_ENUM_GENERATOR120(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 121)
#define LN_PP_ENUM_GENERATOR122(prefix)   LN_PP_ENUM_GENERATOR121(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 122)
#define LN_PP_ENUM_GENERATOR123(prefix)   LN_PP_ENUM_GENERATOR122(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 123)
#define LN_PP_ENUM_GENERATOR124(prefix)   LN_PP_ENUM_GENERATOR123(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 124)
#define LN_PP_ENUM_GENERATOR125(prefix)   LN_PP_ENUM_GENERATOR124(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 125)
#define LN_PP_ENUM_GENERATOR126(prefix)   LN_PP_ENUM_GENERATOR125(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 126)
#define LN_PP_ENUM_GENERATOR127(prefix)   LN_PP_ENUM_GENERATOR126(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 127)
#define LN_PP_ENUM_GENERATOR128(prefix)   LN_PP_ENUM_GENERATOR127(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 128)
#define LN_PP_ENUM_GENERATOR129(prefix)   LN_PP_ENUM_GENERATOR128(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 129)
#define LN_PP_ENUM_GENERATOR130(prefix)   LN_PP_ENUM_GENERATOR129(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 130)
#define LN_PP_ENUM_GENERATOR131(prefix)   LN_PP_ENUM_GENERATOR130(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 131)
#define LN_PP_ENUM_GENERATOR132(prefix)   LN_PP_ENUM_GENERATOR131(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 132)
#define LN_PP_ENUM_GENERATOR133(prefix)   LN_PP_ENUM_GENERATOR132(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 133)
#define LN_PP_ENUM_GENERATOR134(prefix)   LN_PP_ENUM_GENERATOR133(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 134)
#define LN_PP_ENUM_GENERATOR135(prefix)   LN_PP_ENUM_GENERATOR134(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 135)
#define LN_PP_ENUM_GENERATOR136(prefix)   LN_PP_ENUM_GENERATOR135(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 136)
#define LN_PP_ENUM_GENERATOR137(prefix)   LN_PP_ENUM_GENERATOR136(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 137)
#define LN_PP_ENUM_GENERATOR138(prefix)   LN_PP_ENUM_GENERATOR137(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 138)
#define LN_PP_ENUM_GENERATOR139(prefix)   LN_PP_ENUM_GENERATOR138(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 139)
#define LN_PP_ENUM_GENERATOR140(prefix)   LN_PP_ENUM_GENERATOR139(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 140)
#define LN_PP_ENUM_GENERATOR141(prefix)   LN_PP_ENUM_GENERATOR140(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 141)
#define LN_PP_ENUM_GENERATOR142(prefix)   LN_PP_ENUM_GENERATOR141(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 142)
#define LN_PP_ENUM_GENERATOR143(prefix)   LN_PP_ENUM_GENERATOR142(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 143)
#define LN_PP_ENUM_GENERATOR144(prefix)   LN_PP_ENUM_GENERATOR143(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 144)
#define LN_PP_ENUM_GENERATOR145(prefix)   LN_PP_ENUM_GENERATOR144(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 145)
#define LN_PP_ENUM_GENERATOR146(prefix)   LN_PP_ENUM_GENERATOR145(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 146)
#define LN_PP_ENUM_GENERATOR147(prefix)   LN_PP_ENUM_GENERATOR146(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 147)
#define LN_PP_ENUM_GENERATOR148(prefix)   LN_PP_ENUM_GENERATOR147(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 148)
#define LN_PP_ENUM_GENERATOR149(prefix)   LN_PP_ENUM_GENERATOR148(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 149)
#define LN_PP_ENUM_GENERATOR150(prefix)   LN_PP_ENUM_GENERATOR149(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 150)
#define LN_PP_ENUM_GENERATOR151(prefix)   LN_PP_ENUM_GENERATOR150(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 151)
#define LN_PP_ENUM_GENERATOR152(prefix)   LN_PP_ENUM_GENERATOR151(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 152)
#define LN_PP_ENUM_GENERATOR153(prefix)   LN_PP_ENUM_GENERATOR152(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 153)
#define LN_PP_ENUM_GENERATOR154(prefix)   LN_PP_ENUM_GENERATOR153(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 154)
#define LN_PP_ENUM_GENERATOR155(prefix)   LN_PP_ENUM_GENERATOR154(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 155)
#define LN_PP_ENUM_GENERATOR156(prefix)   LN_PP_ENUM_GENERATOR155(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 156)
#define LN_PP_ENUM_GENERATOR157(prefix)   LN_PP_ENUM_GENERATOR156(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 157)
#define LN_PP_ENUM_GENERATOR158(prefix)   LN_PP_ENUM_GENERATOR157(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 158)
#define LN_PP_ENUM_GENERATOR159(prefix)   LN_PP_ENUM_GENERATOR158(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 159)
#define LN_PP_ENUM_GENERATOR160(prefix)   LN_PP_ENUM_GENERATOR159(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 160)
#define LN_PP_ENUM_GENERATOR161(prefix)   LN_PP_ENUM_GENERATOR160(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 161)
#define LN_PP_ENUM_GENERATOR162(prefix)   LN_PP_ENUM_GENERATOR161(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 162)
#define LN_PP_ENUM_GENERATOR163(prefix)   LN_PP_ENUM_GENERATOR162(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 163)
#define LN_PP_ENUM_GENERATOR164(prefix)   LN_PP_ENUM_GENERATOR163(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 164)
#define LN_PP_ENUM_GENERATOR165(prefix)   LN_PP_ENUM_GENERATOR164(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 165)
#define LN_PP_ENUM_GENERATOR166(prefix)   LN_PP_ENUM_GENERATOR165(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 166)
#define LN_PP_ENUM_GENERATOR167(prefix)   LN_PP_ENUM_GENERATOR166(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 167)
#define LN_PP_ENUM_GENERATOR168(prefix)   LN_PP_ENUM_GENERATOR167(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 168)
#define LN_PP_ENUM_GENERATOR169(prefix)   LN_PP_ENUM_GENERATOR168(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 169)
#define LN_PP_ENUM_GENERATOR170(prefix)   LN_PP_ENUM_GENERATOR169(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 170)
#define LN_PP_ENUM_GENERATOR171(prefix)   LN_PP_ENUM_GENERATOR170(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 171)
#define LN_PP_ENUM_GENERATOR172(prefix)   LN_PP_ENUM_GENERATOR171(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 172)
#define LN_PP_ENUM_GENERATOR173(prefix)   LN_PP_ENUM_GENERATOR172(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 173)
#define LN_PP_ENUM_GENERATOR174(prefix)   LN_PP_ENUM_GENERATOR173(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 174)
#define LN_PP_ENUM_GENERATOR175(prefix)   LN_PP_ENUM_GENERATOR174(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 175)
#define LN_PP_ENUM_GENERATOR176(prefix)   LN_PP_ENUM_GENERATOR175(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 176)
#define LN_PP_ENUM_GENERATOR177(prefix)   LN_PP_ENUM_GENERATOR176(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 177)
#define LN_PP_ENUM_GENERATOR178(prefix)   LN_PP_ENUM_GENERATOR177(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 178)
#define LN_PP_ENUM_GENERATOR179(prefix)   LN_PP_ENUM_GENERATOR178(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 179)
#define LN_PP_ENUM_GENERATOR180(prefix)   LN_PP_ENUM_GENERATOR179(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 180)
#define LN_PP_ENUM_GENERATOR181(prefix)   LN_PP_ENUM_GENERATOR180(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 181)
#define LN_PP_ENUM_GENERATOR182(prefix)   LN_PP_ENUM_GENERATOR181(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 182)
#define LN_PP_ENUM_GENERATOR183(prefix)   LN_PP_ENUM_GENERATOR182(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 183)
#define LN_PP_ENUM_GENERATOR184(prefix)   LN_PP_ENUM_GENERATOR183(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 184)
#define LN_PP_ENUM_GENERATOR185(prefix)   LN_PP_ENUM_GENERATOR184(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 185)
#define LN_PP_ENUM_GENERATOR186(prefix)   LN_PP_ENUM_GENERATOR185(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 186)
#define LN_PP_ENUM_GENERATOR187(prefix)   LN_PP_ENUM_GENERATOR186(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 187)
#define LN_PP_ENUM_GENERATOR188(prefix)   LN_PP_ENUM_GENERATOR187(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 188)
#define LN_PP_ENUM_GENERATOR189(prefix)   LN_PP_ENUM_GENERATOR188(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 189)
#define LN_PP_ENUM_GENERATOR190(prefix)   LN_PP_ENUM_GENERATOR179(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 190)
#define LN_PP_ENUM_GENERATOR191(prefix)   LN_PP_ENUM_GENERATOR180(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 191)
#define LN_PP_ENUM_GENERATOR192(prefix)   LN_PP_ENUM_GENERATOR181(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 192)
#define LN_PP_ENUM_GENERATOR193(prefix)   LN_PP_ENUM_GENERATOR182(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 193)
#define LN_PP_ENUM_GENERATOR194(prefix)   LN_PP_ENUM_GENERATOR183(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 194)
#define LN_PP_ENUM_GENERATOR195(prefix)   LN_PP_ENUM_GENERATOR184(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 195)
#define LN_PP_ENUM_GENERATOR196(prefix)   LN_PP_ENUM_GENERATOR185(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 196)
#define LN_PP_ENUM_GENERATOR197(prefix)   LN_PP_ENUM_GENERATOR186(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 197)
#define LN_PP_ENUM_GENERATOR198(prefix)   LN_PP_ENUM_GENERATOR187(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 198)
#define LN_PP_ENUM_GENERATOR199(prefix)   LN_PP_ENUM_GENERATOR188(prefix), LN_PP_ENUM_GENERATOR_I(prefix, 199)
