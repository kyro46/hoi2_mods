
##############################
# Country definition for CHI #
##############################

province =
{ id         = 1215
  naval_base = { size = 5 current_size = 5 }
}              # Qingdao
province =
{ id         = 1237
  naval_base = { size = 6 current_size = 6 }
  ic = { size = 1 current_size = 1 }
}              # Shanghai
province =
{ id       = 1238
  air_base = { size = 10 current_size = 10 }
  ic = { size = 2 current_size = 2 }
}            # Hangzhou
province =
{ id       = 1244
  air_base = { size = 1 current_size = 1 }
  ic = { size = 0 current_size = 0 }
}            # Fuzhou
province =
{ id       = 1251
  air_base = { size = 10 current_size = 10 }
  ic = { size = 2 current_size = 2 }
}            # Nanchang
province =
{ id       = 1360
  air_base = { size = 3 current_size = 3 }
  ic = { size = 2 current_size = 2 }
}            # Chengdu

province =
{ id       = 1235  
  ic = { size = 5 current_size = 5 }
}            # Nanjing

province =
{ id       = 1221 
  ic = { size = 2 current_size = 2 }
}            # Heifei

province =
{ id       = 1227  
  landfort = 1
}            # Louyang

province =
{ id       = 1228  
  ic = { size = 2 current_size = 2 }
}            # Zhengzhou

province =
{ id       = 1232 
  ic = { size = 2 current_size = 2 }
}            # Hankou

province =
{ id       = 1255 
  ic = { size = 2 current_size = 2 }
}            # Changsha

province =
{ id       = 1253 
  ic = { size = 1 current_size = 1 }
}            # Wuchang

province =
{ id       = 1364  
  ic = { size = 1 current_size = 1 }
}            # Guiyang

province =
{ id       = 1269  
  ic = { size = 1 current_size = 1 }
  landfort = 1
}            # Xi'an

province =
{ id       = 1276  
  ic = { size = 1 current_size = 1 }
}            # Lanzhou


#####################
# Country main data #
#####################

country =
{ tag                    = CHI
  capital                = 1235 # Nanjing
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 1000
  oil                    = 1000
  supplies               = 5000
  money                  = 10
  consumer = 0.0000 
  supply = 0.0000 
  production = 0.9090 
  reinforcement = 0.0910 
  upgrading = 0.0000 
  manpower               = 2598 # 2600 - building queue
  dissent                = 15
  transports             = 46
  escorts                = 6
  diplomacy =
  { relation = { tag = AFG value = 1 }
    relation = { tag = CHC value = -200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -100 }
    relation = { tag = MAN value = -100 }
	relation = { tag = GER value = 24 }
	relation = { tag = ITA value = 4 }
	relation = { tag = USA value = 4 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  # Fujian		
  nationalprovinces      = { 1275 1276 1277 1440 1441 1267 1268 1269 1270 1271 1278 1222 1223 1224 1227 1228 1229 1230 1273 1274 1439 1207 1208 1272
                             1209 1225 1226 1203 1204 1205 1206 1210 1211 1212 1213 1214 1215 1216 1386 1398 1388 1397 1202 1377 1387 1389 1390 1394
                             1395 1396 1374 1375 1378 1379 1380 1381 1382 1530 1218 1221 1233 1234 1217 1219 1220 1235 1236 1237 1263 1265 1279 1280
                             1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259 1260 1261 1242 1250 1251
                             1252 1254 1243 1244 1245 1246 1247 1293 1294 1305 1307 1308 1327 1362 1281 1282 1283 1448 1450 1451 1452 1453 1442 1443
                             1444 1421 1430 1431 1432 1433 1435 1445 1446 1447 1258 1309 1310 1311 1319 1325 1248 1249 1312 1313 1314 1317 1318 1320
                             1321 1322 1323 1324 1385 1399 1404 1419 1420 1434 1436 1437 1438
                           }
  ownedprovinces         = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
                             1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
                             1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
                           }
  # Fujian		
  controlledprovinces    = { 1276 1277 1267 1268 1269 1278 1222 1223 1224 1227 1228 1229 1230 1214 1215 1218 1221 1233 1234 1217 1219 1220 1235 1236
                             1237 1263 1265 1279 1280 1360 1361 1231 1232 1253 1264 1266 1238 1239 1240 1241 1262 1363 1364 1365 1255 1256 1257 1259
                             1260 1261 1242 1250 1251 1252 1254 1243 1244 1245 1246 1247
                           }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1190 2150 2290 3010 3070 3080 3130 4010 4120 5080 5090 8050 9010 6210 1020 } # German Mission
  blueprints             = { 1310 2300 2310 2320 1200 1210 1220 6300 1110 } # German Mission+Soviet advisors
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    free_market       = 9
    freedom           = 4
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 52001 }
  headofgovernment       = { type = 9 id = 52002 }
  foreignminister        = { type = 9 id = 52003 }
  armamentminister       = { type = 9 id = 52004 }
  ministerofsecurity     = { type = 9 id = 52005 }
  ministerofintelligence = { type = 9 id = 52006 }
  chiefofstaff           = { type = 9 id = 52007 }
  chiefofarmy            = { type = 9 id = 52008 }
  chiefofnavy            = { type = 9 id = 52009 }
  chiefofair             = { type = 9 id = 52010 }
  dormant_leaders        = { 50370 50377 }

  nationalidentity = "policy_identity_parochial" 
	socialpolicy = "policy_social_conformism" 
	nationalculture = "policy_culture_enterprise"

 ##################################
  # CHINA 1936 Land OOB
 ##################################
  landunit =
  { location = 1276 # Lanzhou
    name     = "1. Jun"
    # ## leader = # Chen Jicheng
    id       = { type = 22000 id = 1 }
    division =
    { experience = 20
      id         = { type = 22000 id = 2 }
      name       = "1. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "7. Jun"
    leader   = 50082 # Zeng Wanzhong
    id       = { type = 22000 id = 3 }
    division =
    { experience = 20
      id         = { type = 22000 id = 4 }
      name       = "7. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "14. Jun"
    leader   = 50329 # Wei Lihuang
    id       = { type = 22000 id = 5 }
    division =
    { experience = 20
      id         = { type = 22000 id = 6 }
      name       = "14. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "22. Jun"
    # ## leader = # Tan Taoyuan
    id       = { type = 22000 id = 7 }
    division =
    { experience = 20
      id         = { type = 22000 id = 8 }
      name       = "22. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1254 # Pingxiang
    name     = "27. Jun"
    leader   = 50208 # Liu Xing
    id       = { type = 22000 id = 9 }
    division =
    { experience = 20
      id         = { type = 22000 id = 10 }
      name       = "27. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1227 # Luoyang
    name     = "30. Jun"
    leader   = 50266 # Sun Lianzhong
    id       = { type = 22000 id = 11 }
    division =
    { experience = 20
      id         = { type = 22000 id = 12 }
      name       = "30. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "37. Jun"
    leader   = 50241 # Mao Pingwen
    id       = { type = 22000 id = 13 }
    division =
    { experience = 20
      id         = { type = 22000 id = 14 }
      name       = "37. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1278 # Baoji
    name     = "38. Jun"
    leader   = 50270 # Sun Weiru
    id       = { type = 22000 id = 15 }
    division =
    { experience = 20
      id         = { type = 22000 id = 16 }
      name       = "38. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1240 # Wenzhou
    name     = "39. Jun"
    leader   = 50206 # Liu Heding
    id       = { type = 22000 id = 17 }
    division =
    { experience = 20
      id         = { type = 22000 id = 18 }
      name       = "39. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1224 # Anyang
    name     = "40. Jun"
    leader   = 50250 # Pang Bingxun
    id       = { type = 22000 id = 19 }
    division =
    { experience = 20
      id         = { type = 22000 id = 20 }
      name       = "40. Jun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "46. Jun"
    # ## leader = # Fan Songfu
    id       = { type = 22000 id = 21 }
    division =
    { experience = 20
      id         = { type = 22000 id = 22 }
      name       = "46. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "51. Jun"
    leader   = 50010 # Yu Xuezhong (Zhang Xuezhong substituted)
    id       = { type = 22000 id = 23 }
    division =
    { experience = 20
      id         = { type = 22000 id = 24 }
      name       = "51. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "57. Jun"
    # ## leader = # Dong Yingbin
    id       = { type = 22000 id = 25 }
    division =
    { experience = 20
      id         = { type = 22000 id = 26 }
      name       = "57. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "67. Jun"
    leader   = 50319 # Wang Yizhe
    id       = { type = 22000 id = 27 }
    division =
    { experience = 20
      id         = { type = 22000 id = 28 }
      name       = "67. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "1. Xin Jun"
    leader   = 50285 # Deng Baoshan
    id       = { type = 22000 id = 29 }
    division =
    { experience = 20
      id         = { type = 22000 id = 30 }
      name       = "1. Xin Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1241 # Quzhou
    name     = "4. Lujun"
    # ## leader = #
    id       = { type = 22000 id = 31 }
    division =
    { experience = 20
      id         = { type = 22000 id = 32 }
      name       = "4. Lujun"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1269 # Xi'an
    name     = "4. Lujun"
    leader   = 50340 # Yang Hucheng
    id       = { type = 22000 id = 33 }
    division =
    { experience = 20
      id         = { type = 22000 id = 34 }
      name       = "4. Lujun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "20. Lujun"
    leader   = 50007 # Zhang Fang
    id       = { type = 22000 id = 35 }
    division =
    { experience = 20
      id         = { type = 22000 id = 36 }
      name       = "20. Lujun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1220 # Yangzhou
    name     = "26. Lujun"
    # ## leader = #
    id       = { type = 22000 id = 37 }
    division =
    { experience = 20
      id         = { type = 22000 id = 38 }
      name       = "26. Lujun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "2. Bubing Shi"
    leader   = 50043 # Zheng Dongguo
    id       = { type = 22000 id = 39 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 40 }
      name         = "2. Bubing Shi"
      type         = infantry
      #max_strength = 80
      strength     = 80
      model        = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "21. Bubing Shi"
    leader   = 50176 # Li Xianzhou
    id       = { type = 22000 id = 41 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 42 }
      name         = "21. Bubing Shi"
      type         = infantry
      #max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1219 # Xiangfan
    name     = "51. Bubing Shi"
    leader   = 50326 # Wang Yaoyu
    id       = { type = 22000 id = 43 }
    division =
    { experience   = 20
      id           = { type = 22000 id = 46 }
      name         = "51. Bubing Shi"
      type         = infantry
      #max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1231 # Xiangfan
    name     = "Jiangxi Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 47 }
    division =
    { experience = 20
      id         = { type = 22000 id = 48 }
      name       = "Jiangxi Silingbu"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "Fujian Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 49 }
    division =
    { experience = 20
      id         = { type = 22000 id = 50 }
      name       = "Fujian Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1222 # Fuyang
    name     = "Anhui Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 51 }
    division =
    { experience = 20
      id         = { type = 22000 id = 52 }
      name       = "Anhui Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "Henan Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 53 }
    division =
    { experience = 20
      id         = { type = 22000 id = 54 }
      name       = "Henan Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "Hubei Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 55 }
    division =
    { experience = 20
      id         = { type = 22000 id = 56 }
      name       = "Hubei Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1232 # Hankou
    name     = "Xibei Silingbu"
    # ## leader = #
    id       = { type = 22000 id = 57 }
    division =
    { experience = 20
      id         = { type = 22000 id = 58 }
      name       = "Xibei Silingbu"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "Jiaodao Zongdui"
    leader   = 50156 # Gui Yongqing
    id       = { type = 22000 id = 59 }
    division =
    { experience = 20
      id         = { type = 22000 id = 60 }
      name       = "Jiaodao Zongdui"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1217 # Lianyungang
    name     = "Suijing Zongtuan"
    leader   = 50125 # Huang Jie
    id       = { type = 22000 id = 61 }
    division =
    { experience = 20
      id         = { type = 22000 id = 62 }
      name       = "Customs Police 1st Detachment"
      type       = infantry
      strength     = 80
      model      = 0
    }
    division =
    { experience = 20
      id         = { type = 22000 id = 63 }
      name       = "Customs Police 2nd Detachment"
      type       = infantry
      strength     = 80
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Shanghai
    name     = "Shanghai Jingbei"
    leader   = 50339 # Yang Hu
    id       = { type = 22000 id = 64 }
    division =
    { experience = 20
      id         = { type = 22000 id = 65 }
      name       = "Shanghai Jingbei"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1237 # Ningbo
    name     = "Marine Brigade"
    # ## leader = #
    id       = { type = 22000 id = 66 }
    division =
    { experience = 20
      id         = { type = 22000 id = 67 }
      name       = "Marine Brigade"
      type       = garrison
      model      = 0
    }
  }
  landunit =
  { location = 1235 # Nanjing
    name     = "Jiangsu Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 68 }
    division =
    { experience = 20
      id         = { type = 22000 id = 69 }
      name       = "Jiangsu Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1233 # Anqing
    name     = "Anhui Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 70 }
    division =
    { experience = 20
      id         = { type = 22000 id = 71 }
      name       = "Anhui Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1238 # Hangzhou
    name     = "Zhejiang Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 72 }
    division =
    { experience = 20
      id         = { type = 22000 id = 73 }
      name       = "Zhejiang Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1255 # Changsha
    name     = "Hunan Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 74 }
    division =
    { experience = 20
      id         = { type = 22000 id = 75 }
      name       = "Hunan Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1253 # Wuchang
    name     = "Hubei Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 76 }
    division =
    { experience = 20
      id         = { type = 22000 id = 77 }
      name       = "Hubei Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1223 # Kaifeng
    name     = "Henan Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 78 }
    division =
    { experience = 20
      id         = { type = 22000 id = 79 }
      name       = "Henan Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "Gansu Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 80 }
    division =
    { experience = 20
      id         = { type = 22000 id = 81 }
      name       = "Gansu Baoantui"
      type       = militia
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1251 # Nanchang
    name     = "Jiangxi Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 82 }
    division =
    { experience = 20
      id         = { type = 22000 id = 83 }
      name       = "Jiangxi Baoantui"
      type       = militia
      model      = 0
    }
  }
  landunit =
  { location = 1244 # Fuzhou
    name     = "Fujian Baoantui"
    # ## leader = #
    id       = { type = 22000 id = 84 }
    division =
    { id         = { type = 22000 id = 86 }
      experience = 20
      name       = "Fujian Baoantui"
      type       = militia
      model      = 0
    }
  }
  # #####################################
  # China 1936 Naval OOB  ###############
  # #####################################
  navalunit =
  { location = 1237 # Shanghai
    base     = 1237
    name     = "1st Fleet"
    id       = { type = 22000 id = 87 }
    division =
    { id    = { type = 22000 id = 88 }
      name  = "Ning-Hai"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = naval_spotter_s
      brigade_model1 = 1
      brigade_model2 = 1
    }
    division =
    { id    = { type = 22000 id = 89 }
      name  = "Ying-Swei"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 90 }
      name  = "Chao-Ho"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 91 }
      name  = "Hai-Chen"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 22000 id = 92 }
      name  = "1. Quzujian Dadui"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 93 }
      name  = "2. Quzujian Dadui"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 22000 id = 94 }
      name  = "1. Yunshujian Dadui"
      type  = transport
      model = 0
    }
  }
  # ###############################
  # China 1936 Airforce OOB  ######
  # ###############################
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 95 }
    name     = "1. Kongjun"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 96 }
      name         = "1. Kongjun"
      #max_strength = 60
      strength     = 54
      type         = tactical_bomber
      model        = 0
    }
  }
  airunit =
  { location = 1251 # Nanchang
    id       = { type = 22000 id = 97 }
    name     = "2. Kongjun"
    base     = 1251 # Nanchang
    division =
    { id           = { type = 22000 id = 98 }
      name         = "2. Kongjun"
      #max_strength = 60
      strength     = 52
      type         = interceptor
      model        = 0
    }
  } 
	convoy = { 
		id = { type = 22000 id = 210 } 
		trade_id = { type = 16384 id = 311 } 
		istradeconvoy = yes 
		transports = 34 
		escorts = 4 
		rare_materials = yes 
		energy = yes 
		metal = yes 
		oil = yes 
		supplies = no 
		path = { 1214 2189 2188 2187 2184 2183 2196 2204 2203 1927 1929 1931 1932 1942 1940 2566 1962 2574 2575 2576 2524 2539 2537 2316 2349 633 } 
		} 
	province_development = { 
		id = { type = 22000 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1235 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 1270 
		days_for_first = 78 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1221 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 779 
		days_for_first = 78 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 1238 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = may 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 779 
		days_for_first = 117 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 1232 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = december 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 34 
		done = 0 
		days = 901 
		days_for_first = 117 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 204 } 
		name = "" 
		progress = 0.0000 
		location = 1280 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = september 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 1270 
		days_for_first = 78 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 205 } 
		name = "" 
		progress = 0.0000 
		location = 1360 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = august 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 779 
		days_for_first = 78 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 206 } 
		name = "" 
		progress = 0.0000 
		location = 1276 
		cost = 2.0000 
		date = { 
			year = 1951 
			month = september 
			day = 25 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 36 
		done = 0 
		days = 1024 
		days_for_first = 195 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 207 } 
		name = "" 
		progress = 0.0000 
		location = 1228 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 25 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 34 
		done = 0 
		days = 901 
		days_for_first = 156 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 208 } 
		name = "" 
		progress = 0.0000 
		location = 1251 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 1884 
		days_for_first = 78 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 209 } 
		name = "" 
		progress = 0.0000 
		location = 1255 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = december 
			day = 3 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 34 
		done = 0 
		days = 2068 
		days_for_first = 117 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22000 id = 211 } 
		name = "" 
		progress = 0.0000 
		location = 1280 
		cost = 5.0000 
		date = { 
			year = 1942 
			month = october 
			day = 20 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 2448 
		days_for_first = 245 
		gearing_bonus = 0.0000 
		type = ic 
		} 
}
