
province = {
	id = 1307
	ic = { size = 5 current_size = 5 }
} # Kunming


##############################
# Country definition for CYN #
##############################

country =
{ tag                    = CYN
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 4
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  consumer = 0.0000 
  supply = 0.0500 
  production = 0.9500 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1307 # Kunming
  manpower               = 199.8 # 200 - building queue
  dissent                = 25
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 1281 1282 1293 1294 1305 1307 1308 1327 1362 }
  ownedprovinces         = { 1281 1282 1293 1294 1305 1307 1308 1327 1362 }
  controlledprovinces    = { 1281 1282 1293 1294 1305 1307 1308 1327 1362 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 } # allow digging
  blueprints             = { 6210 }
  diplomacy =
  { relation = { tag = CHI value = 200 }
    relation = { tag = CSX value = 200 }
    relation = { tag = CXB value = 200 }
    relation = { tag = CGX value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  headofstate            = { type = 9 id = 501001 }
  headofgovernment       = { type = 9 id = 501002 }
  foreignminister        = { type = 9 id = 501003 }
  armamentminister       = { type = 9 id = 501004 }
  ministerofsecurity     = { type = 9 id = 501005 }
  ministerofintelligence = { type = 9 id = 501006 }
  chiefofstaff           = { type = 9 id = 501007 }
  chiefofarmy            = { type = 9 id = 501008 }
  chiefofnavy            = { type = 9 id = 501009 }
  chiefofair             = { type = 9 id = 501010 }
  # ######
  # CHINA 1936 OOB
  # ######
  landunit =
  { location = 1307 # Kunming
    name     = "Yunnan Jingbei"
    leader   = 501006 # Long Yun
    id       = { type = 22100 id = 1 }
    division =
    { id       = { type = 22100 id = 2 }
      name     = "21. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 3 }
      name     = "22. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 4 }
      name     = "23. Duli Lü"
      type     = infantry
      strength = 50
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "Sichuan Baoantui"
    # ## leader = #
    id       = { type = 22100 id = 5 }
    division =
    { id    = { type = 22100 id = 6 }
      name  = "Sichuan Baoantui"
      type  = militia
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "4. Jun"
    # ## leader = 50332 # Wu Qiwei
    id       = { type = 22100 id = 7 }
    division =
    { id    = { type = 22100 id = 8 }
      name  = "4. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "47. Jun"
    # ## leader = 50171 # Li Jiayu
    id       = { type = 22100 id = 9 }
    division =
    { id    = { type = 22100 id = 10 }
      name  = "47. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1282 # Kangding
    name     = "24. Jun"
    leader   = 501004 # Liu Wenhui
    id       = { type = 22100 id = 11 }
    division =
    { id       = { type = 22100 id = 12 }
      name     = "136. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22100 id = 13 }
      name     = "137. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1362 # Zhaotong
    name     = "21. Jun"
    # ## leader = 50207 # Liu Xiang
    id       = { type = 22100 id = 14 }
    division =
    { id    = { type = 22100 id = 15 }
      name  = "21. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "23. Jun"
    # ## leader = 50248 # Pan Wenhua
    id       = { type = 22100 id = 16 }
    division =
    { id    = { type = 22100 id = 17 }
      name  = "23. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "44. Jun"
    # ## leader = 50323 # Wang Zuanxu
    id       = { type = 22100 id = 18 }
    division =
    { id    = { type = 22100 id = 19 }
      name  = "44. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1308 # Qujing
    name     = "45. Jun"
    # ## leader = 50284 # Deng Xihou
    id       = { type = 22100 id = 20 }
    division =
    { id    = { type = 22100 id = 21 }
      name  = "45. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1327 # Wenshan
    name     = "7. Lujun"
    # ## leader = #
    id       = { type = 22100 id = 22 }
    division =
    { id    = { type = 22100 id = 23 }
      name  = "7. Lujun"
      type  = infantry
      model = 0
    }
  }

  landunit =
  { location = 1327 # Wenshan
    name     = "5. Jun"
    # ## leader = 50115 # Xue Yue
    id       = { type = 22100 id = 24 }
    division =
    { id    = { type = 22100 id = 25 }
      name  = "5. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "20. Jun"
    # ## leader = 50343 # Yang Sen
    id       = { type = 22100 id = 26 }
    division =
    { id    = { type = 22100 id = 27 }
      name  = "20. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Guizhou Silingbu"
    # ## leader = #
    id       = { type = 22100 id = 28 }
    division =
    { id    = { type = 22100 id = 29 }
      name  = "Guizhou Silingbu"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1307 # Kunming
    name     = "Guizhou Baoantui"
    # ## leader = #
    id       = { type = 22100 id = 30 }
    division =
    { id    = { type = 22100 id = 31 }
      name  = "Guizhou Baoantui"
      type  = militia
      model = 0
    }
  } 
	province_development = { 
		id = { type = 22100 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1307 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = april 
			day = 20 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 1135 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22100 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1305 
		cost = 2.0000 
		date = { 
			year = 1959 
			month = december 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 38 
		done = 0 
		days = 1669 
		days_for_first = 285 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
