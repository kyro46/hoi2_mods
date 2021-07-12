
##############################
# Country definition for CGX #
##############################

# Shantou had supplypool = 500 oilpool = 50 before 1.09
province =
{ id         = 1313
  air_base   = { size = 3 current_size = 3 }
  naval_base = { size = 4 current_size = 4 }
  ic = { size = 8 current_size = 8 }
}              # Guangzhou
province =
{ id         = 1320
  naval_base = { size = 3 current_size = 3 }
}              # Zhanjiang
province =
{ id         = 1321
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 7 current_size = 7 }
}              # Hainan

province = {
	id = 1258
	ic = { size = 2 current_size = 2 }
} # Guilin

province = {
	id = 1319
	ic = { size = 0 current_size = 0 }
} # Nanning


#####################
# Country main data #
#####################

country =
{ tag                    = CGX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 10
  transports             = 40
  escorts                = 10
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 150
  supplies               = 600
  money                  = 50
  consumer = 0.1250 
  supply = 0.1818 
  production = 0.6932 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1258 # Guilin
  manpower               = 199.6 # 200 - building queue
  dissent                = 20
  diplomacy =
  { relation = { tag = CHC value = -200 }
    relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = GER value = 2 }
	relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
	relation = { tag = ITA value = 2 }
  }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "GER" NumberOfSpies = 1 }
  SpyInfo                = { country = "CXB" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "JAP" NumberOfSpies = 3 }
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
  SpyInfo                = { country = "CSX" NumberOfSpies = 2 }
  nationalprovinces      = { 1248 1249 1258 1309 1310 1311 1312 1313 1314 1316 1317 1318 1319 1320 1321 1325 }
  ownedprovinces         = { 1248 1249 1258 1309 1310 1311 1312 1313 1314 1317 1318 1319 1320 1321 1325 }
  controlledprovinces    = { 1248 1249 1258 1309 1310 1311 1312 1313 1314 1317 1318 1319 1320 1321 1325 }
  # Guangxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 3010 3130 5080 } # allow digging
  blueprints             = { 6210 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 502001 }
  headofgovernment       = { type = 9 id = 502002 }
  foreignminister        = { type = 9 id = 502003 }
  armamentminister       = { type = 9 id = 502004 }
  ministerofsecurity     = { type = 9 id = 502005 }
  ministerofintelligence = { type = 9 id = 502006 }
  chiefofstaff           = { type = 9 id = 502007 }
  chiefofarmy            = { type = 9 id = 502008 }
  chiefofnavy            = { type = 9 id = 502009 }
  chiefofair             = { type = 9 id = 502010 }
  # ######
  # GUANGXI OOB
  # ######
  landunit =
  { location = 1313 # Guangzhou
    name     = "1. Juntuan"
    # ## leader = # Chen Jitang
    id       = { type = 22400 id = 1 }
    division =
    { experience = 30
      id         = { type = 22400 id = 2 }
      name       = "Xunlian Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 3 }
      name       = "1. Duli Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 4 }
      name       = "Jingbei Lü"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "1. Jun"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 5 }
    division =
    { experience = 30
      id         = { type = 22400 id = 6 }
      name       = "1. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 7 }
      name       = "2. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 8 }
      name       = "3. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "2. Jun"
    # ## leader = # Chang Ta
    id       = { type = 22400 id = 9 }
    division =
    { experience = 30
      id         = { type = 22400 id = 10 }
      name       = "4. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 11 }
      name       = "5. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 12 }
      name       = "6. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1318 # Maoming
    name     = "3. Jun"
    # ## leader = # Yu Hanmou
    id       = { type = 22400 id = 13 }
    division =
    { experience = 30
      id         = { type = 22400 id = 14 }
      name       = "7. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 15 }
      name       = "8. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 16 }
      name       = "9. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "4. Juntuan"
    # ## leader = # Li Zongren
    id       = { type = 22400 id = 17 }
    division =
    { experience = 30
      id         = { type = 22400 id = 18 }
      name       = "19. Lujun"
      type       = infantry
      strength   = 30
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "7. Jun"
    # ## leader = # Liao Lei
    id       = { type = 22400 id = 19 }
    division =
    { experience = 30
      id         = { type = 22400 id = 20 }
      name       = "19. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 21 }
      name       = "21. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 22 }
      name       = "22. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 23 }
      name       = "24. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1319 # Nanning
    name     = "15. Jun"
    # ## leader = # Xia Wei
    id       = { type = 22400 id = 24 }
    division =
    { experience = 30
      id         = { type = 22400 id = 25 }
      name       = "42. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 26 }
      name       = "43. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 27 }
      name       = "44. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 28 }
      name       = "45. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "Guangdong Jingbei"
    id       = { type = 22400 id = 29 }
    division =
    { experience = 30
      id         = { type = 22400 id = 30 }
      name       = "Guangdong Baoantui"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "Guangxi Jingbei"
    id       = { type = 22400 id = 31 }
    division =
    { experience = 30
      id         = { type = 22400 id = 32 }
      name       = "Guangdong Baoantui"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 30
      id         = { type = 22400 id = 33 }
      name       = "Guangdong Bubing Jun"
      type       = militia
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1321 # Hainan
    name     = "Hainan Jingbei"
    id       = { type = 22400 id = 34 }
    division =
    { experience = 30
      id         = { type = 22400 id = 35 }
      name       = "9. Duli Lü"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "9. Jun"
    # ## leader = 50089 # Hao Menglin
    id       = { type = 22400 id = 36 }
    division =
    { experience = 30
      id         = { type = 22400 id = 37 }
      name       = "9. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "28. Jun"
    # leader = X # ?
    id       = { type = 22400 id = 38 }
    division =
    { experience = 30
      id         = { type = 22400 id = 39 }
      name       = "28. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "Hunan Xi Jingbei"
    # ## leader = #
    id       = { type = 22400 id = 40 }
    division =
    { experience   = 30
      id           = { type = 22400 id = 41 }
      name         = "34. Xin Bubing Shi"
      type         = infantry
      #max_strength = 50
      strength     = 50
      model        = 0
    }
  }
  landunit =
  { location = 1311 # Wuzhou
    name     = "Ningbo Jingbei"
    # ## leader = #
    id       = { type = 22400 id = 42 }
    division =
    { id           = { type = 22400 id = 43 }
      name         = "37. Duli Bubing Lü"
      type         = infantry
      #max_strength = 25
      strength     = 25
      model        = 0
    }
  }
  landunit =
  { location = 1312 # Shaoguan
    name     = "20. Jun"
    # ## leader = 50162 # Guo Rudong
    id       = { type = 22400 id = 44 }
    division =
    { id    = { type = 22400 id = 45 }
      name  = "20. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1313 # Guangzhou
    name     = "2. Jun"
    # ## leader = 50050 # Jiang Dingwen
    id       = { type = 22400 id = 46 }
    division =
    { id    = { type = 22400 id = 47 }
      name  = "2. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1249 # Chao'an
    name     = "16. Jun"
    # ## leader = # Li Yunyan
    id       = { type = 22400 id = 48 }
    division =
    { id    = { type = 22400 id = 49 }
      name  = "16. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1248 # Shantou
    name     = "36. Jun"
    # ## leader = # Chou Hunyuan
    id       = { type = 22400 id = 50 }
    division =
    { id    = { type = 22400 id = 51 }
      name  = "36. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1309 # Bose
    name     = "14. Lujun"
    # ## leader = #
    id       = { type = 22400 id = 52 }
    division =
    { id    = { type = 22400 id = 53 }
      name  = "14. Lujun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1310 # Liuzhou
    name     = "18. Jun"
    # ## leader = 50219 # Luo Zhuoying
    id       = { type = 22400 id = 54 }
    division =
    { id    = { type = 22400 id = 55 }
      name  = "18. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1258 # Guilin
    name     = "26. Jun"
    # ## leader = 50104 # Xiao Zhichu
    id       = { type = 22400 id = 56 }
    division =
    { id    = { type = 22400 id = 57 }
      name  = "26. Jun"
      type  = infantry
      model = 0
    }
  }
  # ##### NAVY OOB ######
  navalunit =
  { location = 1313 # Guangzhou
    name     = "Guangdong Haijun"
    id       = { type = 22400 id = 58 }
    base     = 1313
    division =
    { id    = { type = 22400 id = 59 }
      name  = "1. Yunshuji Dadui"
      type  = transport
      model = 0
    }
  }
  # ##### AIR FORCE OOB ######
  airunit =
  { location = 1313 # Guangzhou
    name     = "Guangxi Kongjun"
    base     = 1313 # Guangzhou
    id       = { type = 22400 id = 60 }
    division =
    { id           = { type = 22400 id = 61 }
      name         = "Guangxi Hang Kong Dui"
      type         = interceptor
      model        = 0
      #max_strength = 40
      strength     = 20
    }
  } 
	province_development = { 
		id = { type = 22400 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1313 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = january 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 1195 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22400 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1258 
		cost = 2.0000 
		date = { 
			year = 1957 
			month = april 
			day = 18 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 1195 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22400 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 1317 
		cost = 2.0000 
		date = { 
			year = 1948 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 1195 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22400 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 1319 
		cost = 2.0000 
		date = { 
			year = 1948 
			month = october 
			day = 10 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 1195 
		days_for_first = 180 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
