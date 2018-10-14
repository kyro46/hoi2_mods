
##############################
# Country definition for CSX #
##############################

province =
{ id       = 1205
  air_base = { size = 5 current_size = 5 }
  ic = { size = 3 current_size = 3 }
}            # Beiping
province =
{ id       = 1204
  ic = { size = 3 current_size = 3 }
}            # Tianjin
province = {
	id = 1209
  landfort = 1
} # Datong
province = {
	id = 1211
	ic = { size = 1 current_size = 1 }
  landfort = 1
} # Shijiazhuang
province =
{ id       = 1216
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
  ic = { size = 3 current_size = 3 }
}            # Jinan
province = {
	id = 1225
	ic = { size = 3 current_size = 3 }
  landfort = 1
} # Taiyuan
province = {
	id = 1226
  landfort = 1
} # Changzhi

#####################
# Country main data #
#####################

country =
{ tag                    = CSX
  regular_id             = CHI
  intrinsic_gov_type     = paternal_autocrat
  extra_tc               = 20
  # Resource Reserves
  energy                 = 200
  metal                  = 200
  rare_materials         = 100
  oil                    = 100
  supplies               = 100
  money                  = 50
  consumer = 0.2143 
  supply = 0.2857 
  production = 0.5000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 1225 # Taiyuan
  manpower               = 199.6 # 200 - building queue
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
  # Shanxi
  nationalprovinces      = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  ownedprovinces         = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  # Shanxi
  controlledprovinces    = { 1204 1205 1206 1210 1211 1212 1213 1216 1207 1208 1272 1209 1225 1226 }
  # Shanxi
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 } # allow digging
  blueprints             = { 6210 }
  diplomacy =
  { relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CGX value = 200 }
    relation = { tag = CXB value = 200 access = yes }
    relation = { tag = CYN value = 200 }
    relation = { tag = JAP value = -75 }
    relation = { tag = MAN value = -75 }
    relation = { tag = CHC value = -200 }
  }
  headofstate            = { type = 9 id = 503001 }
  headofgovernment       = { type = 9 id = 503002 }
  foreignminister        = { type = 9 id = 503003 }
  armamentminister       = { type = 9 id = 503004 }
  ministerofsecurity     = { type = 9 id = 503005 }
  ministerofintelligence = { type = 9 id = 503006 }
  chiefofstaff           = { type = 9 id = 503007 }
  chiefofarmy            = { type = 9 id = 503008 }
  chiefofnavy            = { type = 9 id = 503009 }
  chiefofair             = { type = 9 id = 503010 }
  # ######
  # SHANXI Land 1936 OOB
  # TYPE: 22300
  # ######
  landunit =
  { location = 1225 # Taiyuan
    name     = "Shanxi Jingbei"
    # ## leader = # Yan Xishan
    id       = { type = 22300 id = 1 }
    division =
    { id       = { type = 22300 id = 2 }
      name     = "1. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 3 }
      name     = "1. Qibing Shi"
      type     = cavalry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "3. Lujun"
    # ## leader = # Han Fuqu
    id       = { type = 22300 id = 4 }
    division =
    { id       = { type = 22300 id = 5 }
      name     = "22. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 6 }
      name     = "22. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1209 # Datong
    name     = "33. Jun"
    # ## leader = 50296 # Xu Yongchang
    id       = { type = 22300 id = 7 }
    division =
    { id    = { type = 22300 id = 8 }
      name  = "33. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1226 # Changzhi
    name     = "34. Jun"
    # ## leader = # Yang Aiyuan
    id       = { type = 22300 id = 9 }
    division =
    { id       = { type = 22300 id = 10 }
      name     = "66. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 11 }
      name     = "71. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "35. Jun"
    # ## leader = # Fu Zuoyi
    id       = { type = 22300 id = 14 }
    division =
    { id       = { type = 22300 id = 15 }
      name     = "72. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "Suiyuan Jingbei"
    id       = { type = 22300 id = 16 }
    division =
    { id       = { type = 22300 id = 17 }
      name     = "Suiyuan Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1205 # Beiping
    name     = "29. Jun"
    # ## leader = # Song Zheyuan
    id       = { type = 22300 id = 12 }
    division =
    { id       = { type = 22300 id = 13 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 18 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 19 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 20 }
      name     = "37. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 21 }
      name     = "9. Qibing Shi"
      type     = cavalry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 22 }
      name     = "39. Duli Lü"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "Hebei Jingbei"
    id       = { type = 22300 id = 23 }
    division =
    { id       = { type = 22300 id = 24 }
      name     = "Hebei Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1206 # Kalgan
    name     = "Chahar Jingbei"
    id       = { type = 22300 id = 25 }
    division =
    { id       = { type = 22300 id = 26 }
      name     = "Chahar Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "Ji-Cai-Sui-Jing Gongshu"
    # ## leader = #
    id       = { type = 22300 id = 27 }
    division =
    { id    = { type = 22300 id = 28 }
      name  = "Ji-Cai-Sui-Jing Gongshu"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "12. Jun"
    # ## leader = # Sun Tongxuan
    id       = { type = 22300 id = 29 }
    division =
    { id       = { type = 22300 id = 30 }
      name     = "20. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 22300 id = 31 }
      name     = "81. Bubing Shi"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1216 # Jinan
    name     = "Shandong Jingbei"
    id       = { type = 22300 id = 32 }
    division =
    { id       = { type = 22300 id = 33 }
      name     = "Shandong Baoantui"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { location = 1208 # Hohhot
    name     = "13. Jun"
    # ## leader = 50278 # Tang Enbo
    id       = { type = 22300 id = 34 }
    division =
    { id    = { type = 22300 id = 35 }
      name  = "13. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "19. Jun"
    # ## leader = # Li Shengda
    id       = { type = 22300 id = 36 }
    division =
    { id    = { type = 22300 id = 37 }
      name  = "19. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1212 # Handan
    name     = "32. Jun"
    # ## leader = 50253 # Shang Zhen
    id       = { type = 22300 id = 38 }
    division =
    { id    = { type = 22300 id = 39 }
      name  = "32. Jun"
      type  = infantry
      model = 0
    }
  }

  landunit =
  { location = 1226 # Changzhi
    name     = "42. Jun"
    # ## leader = # ???
    id       = { type = 22300 id = 40 }
    division =
    { id    = { type = 22300 id = 41 }
      name  = "42. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1210 # Baoding
    name     = "53. Jun"
    # ## leader = 50305 # Wan Fulin
    id       = { type = 22300 id = 42 }
    division =
    { id    = { type = 22300 id = 43 }
      name  = "53. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "63. Jun"
    # ## leader = # Feng Zhanhai
    id       = { type = 22300 id = 44 }
    division =
    { id    = { type = 22300 id = 45 }
      name  = "63. Jun"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 1272 # Yuling
    name     = "Dongbei Qibing Jun"
    # ## leader = 50091 # He Zhuguo
    id       = { type = 22300 id = 46 }
    division =
    { id    = { type = 22300 id = 47 }
      name  = "Dongbei Qibing Jun"
      type  = cavalry
      model = 0
    }
  }
  landunit =
  { location = 1225 # Taiyuan
    name     = "Shanxi Baoantui"
    # ## leader = #
    id       = { type = 22300 id = 48 }
    division =
    { id    = { type = 22300 id = 49 }
      name  = "Shanxi Baoantui"
      type  = militia
      model = 0
    }
  }  
	province_development = { 
		id = { type = 22300 id = 203 } 
		name = "" 
		progress = 0.0000 
		location = 1204 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = january 
			day = 0 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 2880 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22300 id = 202 } 
		name = "" 
		progress = 0.0000 
		location = 1205 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = june 
			day = 22 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 821 
		days_for_first = 120 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 22300 id = 200 } 
		name = "" 
		progress = 0.0000 
		location = 1216 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 7 
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
		id = { type = 22300 id = 201 } 
		name = "" 
		progress = 0.0000 
		location = 1225 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = july 
			day = 7 
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
}
