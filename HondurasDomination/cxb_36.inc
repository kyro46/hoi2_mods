
province = {
	id = 1442
	ic = { size = 3 current_size = 3 }
} # Golmud


##############################
# Country definition for CXB #
##############################

country =
{ tag                    = CXB
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 2
  puppet                 = CHI
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  consumer = 0.0000 
  supply = 0.0000 
  production = 1.0000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1442 # Golmud
  manpower               = 199.9 # 200 - building queue
  dissent                = 25
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 3
  }
  nationalprovinces      = { 1442 1441 1273 1440 1443 1276 1275 1274 1444 1439 }
  ownedprovinces         = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  controlledprovinces    = { 1442 1441 1273 1440 1443 1274 1444 1439 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 } # allow digging
  blueprints             = { 6210 }
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CSX value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  headofstate            = { type = 9 id = 504001 }
  headofgovernment       = { type = 9 id = 504002 }
  foreignminister        = { type = 9 id = 504003 }
  armamentminister       = { type = 9 id = 504004 }
  ministerofsecurity     = { type = 9 id = 504005 }
  ministerofintelligence = { type = 9 id = 504006 }
  chiefofstaff           = { type = 9 id = 504007 }
  chiefofarmy            = { type = 9 id = 504008 }
  chiefofnavy            = { type = 9 id = 504009 }
  chiefofair             = { type = 9 id = 504010 }
  # ######
  # XIBEI SAN MA OOB
  # ######
  landunit =
  { location = 1273 # Yinchuan
    name     = "15. Lujun"
    # ## leader = 504004 # Ma Hongkui
    id       = { type = 22200 id = 1 }
    division =
    { experience = 40
      id         = { type = 22200 id = 2 }
      name       = "35. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "11. Jun"
    # ## leader = 504005 # Ma Hongbin
    id       = { type = 22200 id = 3 }
    division =
    { experience = 40
      id         = { type = 22200 id = 4 }
      name       = "Xin 7. Bubing Shi"
      type       = militia
      strength   = 100
      model      = 0
    }
    division =
    { experience   = 40
      id           = { type = 22200 id = 5 }
      name         = "Xin 7. Qibing Shi"
      type         = cavalry
      #max_strength = 100
      strength     = 100
      model        = 0
    }
    division =
    { experience = 40
      id         = { type = 22200 id = 6 }
      name       = "10. Duli Lü"
      type       = infantry
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1443 # Xining
    name     = "Xin 2. Jun"
    # ## leader = 504006 # Ma Hongbin
    id       = { type = 22200 id = 7 }
    division =
    { experience = 40
      id         = { type = 22200 id = 8 }
      name       = "Xin 9. Bubing Shi"
      type       = infantry
      strength   = 100
      model      = 0
    }
    division =
    { experience = 40
      id         = { type = 22200 id = 9 }
      name       = "1. Qibing Lü"
      type       = cavalry
      strength   = 100
      model      = 0
    }
  }
  landunit =
  { location = 1443 # Xotan
    name     = "Tunganistan Jun"
    # ## leader = # Ma Hushan
    id       = { type = 22200 id = 10 }
    division =
    { experience = 40
      id         = { type = 22200 id = 11 }
      name       = "Tungan Shi"
      type       = militia
      strength   = 50
      model      = 0
    }
  }
  landunit =
  { location = 1443 # Xining
    name     = "3. Jun"
    # ## leader = # Zeng Wanzhong
    id       = { type = 22200 id = 12 }
    division =
    { experience = 40
      id         = { type = 22200 id = 13 }
      name       = "3. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1440 # Jinchang
    name     = "10. Jun"
    # ## leader = 50112 # Xu Yuanquan
    id       = { type = 22200 id = 14 }
    division =
    { experience = 40
      id         = { type = 22200 id = 15 }
      name       = "10. Jun"
      type       = infantry
      model      = 0
    }
  }
  landunit =
  { location = 1273 # Yinchuan
    name     = "15. Jun"
    # ## leader = 50214 # Liu Mao'en
    id       = { type = 22200 id = 16 }
    division =
    { id    = { type = 22200 id = 17 }
      name  = "15. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1274 # Guyuan
    name     = "25. Jun"
    # ## leader = 50307 # Wan Yaohuang
    id       = { type = 22200 id = 18 }
    division =
    { experience = 40
      id         = { type = 22200 id = 19 }
      name       = "25. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1276 # Lanzhou
    name     = "31. Jun"
    # ## leader = # Liang Guanying
    id       = { type = 22200 id = 20 }
    division =
    { experience = 40
      id         = { type = 22200 id = 21 }
      name       = "31. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1277 # Tianshui
    name     = "41. Jun"
    # ## leader = 50263 # Sun Zhen
    id       = { type = 22200 id = 22 }
    division =
    { experience = 40
      id         = { type = 22200 id = 23 }
      name       = "41. Jun"
      type       = infantry
      model      = 0
    }
    dig_in   = 20.000
  }
  landunit =
  { location = 1277 # Tianshui
    name     = "25. Bubing Shi"
    # ## leader = 50154 # Guan Linzheng
    id       = { type = 22200 id = 24 }
    division =
    { experience   = 40
      id           = { type = 22200 id = 25 }
      name         = "25. Bubing Shi"
      type         = infantry
      #max_strength = 50
      strength     = 50
      model        = 0
    }
    dig_in   = 20.000
  } 
	province_development = { 
		id = { type = 22200 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1442 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = august 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 956 
		days_for_first = 192 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
