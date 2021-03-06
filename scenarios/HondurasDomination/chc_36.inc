
##############################
# Country definition for CHC #
##############################

province = { id = 1270 landfort = 3 } # Xianyang
province = { id = 1271 landfort = 3 ic = { size = 3 current_size = 3 } } # Yan'an
province = { id = 1275 landfort = 3 } # Pingliang

#####################
# Country main data #
#####################

country =
{ tag                    = CHC
  intrinsic_gov_type     = leninist
  extra_tc               = 7
  capital                = 1271 # Yan'an
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 800
  money                  = 50
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 349.8 # 350 - building queue
  diplomacy =
  { relation = { tag = JAP value = -200 }
    relation = { tag = MAN value = -100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CGX value = -200 }
    relation = { tag = CYN value = -200 }
    relation = { tag = CSX value = -200 }
    relation = { tag = CXB value = -200 }
    relation = { tag = SOV value = 100 }
    relation = { tag = MON value = 25 }
    relation = { tag = SIK value = 40 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 3 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 1 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 1 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 1 }
  nationalprovinces      = { 1202 1203 1204 1205 1206 1207 1208 1209 1210 1212 1211 1213 1214 1215 1216 1217 1218 1219
							 1220 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1237
							 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255
							 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273
							 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1293 1294 1305 1307 1308 1309 1310 1311
							 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1327 1360 1361 1362
							 1363 1364 1365 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395
							 1396 1397 1398 1421 1430 1431 1432 1433 1435 1439 1445 1447 1440 1441 1442 1443 1444 1446
							 1448 1450 1451 1452 1453 1530
                           }
  ownedprovinces         = { 1270 1271 1275 }
  controlledprovinces    = { 1270 1271 1275 }
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1110 1190 5080 6210 6300}
  blueprints             = { 1020 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 10
    free_market       = 1
    freedom           = 2
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 51001 }
  headofgovernment       = { type = 9 id = 51002 }
  foreignminister        = { type = 9 id = 51003 }
  armamentminister       = { type = 9 id = 51004 }
  ministerofsecurity     = { type = 9 id = 51005 }
  ministerofintelligence = { type = 9 id = 51006 }
  chiefofstaff           = { type = 9 id = 51007 }
  chiefofarmy            = { type = 9 id = 51008 }
  chiefofnavy            = { type = 9 id = 51009 }
  chiefofair             = { type = 9 id = 51010 }
  # ######
  # COMMUNSIT CHINA OOB
  # ######
  landunit =
  { location = 1271 # Yan'an
    name     = "1. Fangmianjun"
    id       = { type = 24000 id = 1 }
    division =
    { experience = 60
      id         = { type = 24000 id = 2 }
      name       = "1. Juntuan"
      type       = bergsjaeger
      model      = 0
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 3 }
      name       = "3. Juntuan"
      type       = bergsjaeger
      model      = 0
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 4 }
      name       = "5. Juntuan"
      type       = bergsjaeger
      model      = 0
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 5 }
      name       = "8. Juntuan"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 6 }
      name       = "9. Juntuan"
      type       = infantry
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1275
    name     = "2. Fangmianjun"
    id       = { type = 24000 id = 7 }
    division =
    { experience = 60
      id         = { type = 24000 id = 8 }
      name       = "2. Juntuan"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 9 }
      name       = "6. Juntuan"
      type       = infantry
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1270 # Xianyang
    name     = "4. Fangmianjun"
    id       = { type = 24000 id = 10 }
    division =
    { experience = 60
      id         = { type = 24000 id = 11 }
      name       = "4. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 12 }
      name       = "9. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 13 }
      name       = "30. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 14 }
      name       = "31. Jun"
      type       = infantry
      model      = 1
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1271 # Yan'an
    name     = "15. Juntuan"
    id       = { type = 24000 id = 15 }
    division =
    { experience = 60
      id         = { type = 24000 id = 16 }
      name       = "25. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 17 }
      name       = "26. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 18 }
      name       = "27. Jun"
      type       = infantry
      model      = 1
    }
    division =
    { experience = 60
      id         = { type = 24000 id = 19 }
      name       = "28. Jun"
      type       = infantry
      model      = 1
    }
    dig_in   = 20.000
  }
#	province_development = { 
#		id = { type = 24000 id = 20 } 
#		name = "" 
#		progress = 0.0000 
#		location = 1271 
#		cost = 5.0000 
#		date = { 
#			year = 1936 
#			month = october 
#			day = 18 
#			hour = 0 
#			} 
#		manpower = 1.0000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 1 
#		done = 0 
#		days = 288 
#		days_for_first = 288 
#		gearing_bonus = 0.0000 
#		type = ic 
#		} 
	province_development = { 
		id = { type = 24000 id = 21 } 
		name = "" 
		progress = 0.0000 
		location = 1271 
		cost = 2.0000 
		date = { 
			year = 1948 
			month = february 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2474 
		days_for_first = 240 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 24000 id = 22 } 
		name = "" 
		progress = 0.0000 
		location = 1275 
		cost = 2.0000 
		date = { 
			year = 1937 
			month = june 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 4 
		done = 0 
		days = 144 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
