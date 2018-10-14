
##############################
# Country definition for SWE #
##############################

province = { id = 93 coastalfort = 1 } # Malmö
province =
{ id          = 95
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Karlskrona
province =
{ id          = 98
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Göteborg
province = { id = 99 landfort = 1 } # Skövde
province =
{ id          = 101
  anti_air    = 2
  naval_base  = { size = 7 current_size = 7 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Stockholm
province =
{ id          = 127
  anti_air    = 2
  naval_base  = { size = 3 current_size = 3 }
  air_base    = { size = 4 current_size = 4 }
  landfort    = 3
}               # Luleå

#####################
# Country main data #
#####################

country =
{ tag                    = SWE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.0900 
  supply = 0.04500 
  production = 0.8650 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 83.2 # 85 - building queue
  capital                = 101
  transports             = 75
  escorts                = 8
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = CZE value = 5 }
	relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = FIN value = 151 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
	relation = { tag = FRA value = 8 }
	relation = { tag = CAN value = 5 }
	relation = { tag = IRE value = 4 }
	relation = { tag = AST value = 4 }
	relation = { tag = NZL value = 29 }
	relation = { tag = POR value = -22 }
	relation = { tag = SCH value = 3 }
	relation = { tag = SPR value = 3 }
	relation = { tag = IRQ value = 3 }
	relation = { tag = ROM value = 2 }
	relation = { tag = SAF value = 4 }
	relation = { tag = POL value = -1 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  nationalprovinces      = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  ownedprovinces         = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  controlledprovinces    = { 112 126 127 123 122 121 120 119 115 113 114 106 105 104 102 101 100 99 98 97 93 95 96 }
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 4190 2150 4130 2010 3190 2290 2300 2310 3130 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190
                             5470 6010 6020 3010 3020 3070 3080 3250 3400 3410 8010 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 10
    freedom           = 6
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 7001 }
  headofgovernment       = { type = 9 id = 7033 }
  foreignminister        = { type = 9 id = 7038 }
  armamentminister       = { type = 9 id = 7047 }
  ministerofsecurity     = { type = 9 id = 7058 }
  ministerofintelligence = { type = 9 id = 7006 }
  chiefofstaff           = { type = 9 id = 7007 }
  chiefofarmy            = { type = 9 id = 7008 }
  chiefofnavy            = { type = 9 id = 7009 }
  chiefofair             = { type = 9 id = 7010 }
  # 5 infantry divisions.
  landunit =
  { location = 101
    name     = "1a Armékåren"
    id       = { type = 29600 id = 1 }
    division =
    { id    = { type = 29600 id = 2 }
      name  = "I. Fördelningen"
      type  = infantry
      model = 0
      extra = artillery
    }
  }
  landunit =
  { location = 127
    name     = "Övre Norrlandstrupper"
    id       = { type = 29600 id = 3 }
    division =
    { id    = { type = 29600 id = 4 }
      name  = "V. Fördelningen"
      type  = infantry
      model = 0
    }
  }
  landunit =
  { location = 102
    name     = "Hemmaförsvaret"
    id       = { type = 29600 id = 5 }
    division =
    { id   = { type = 29600 id = 6 }
      name = "Landstormen"
      type = militia
    }
  }
	### SWE Navy OOB ###
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Kustflottan"
    id       = { type = 29600 id = 10 }
    division =
    { id    = { type = 29600 id = 11 }
      name  = "HMS Sverige"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 29600 id = 12 }
      name  = "HMS Drottning Victoria"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 29600 id = 13 }
      name  = "HMS Gustav V"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 29600 id = 14 }
      name  = "HMS Clas Fleming"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 29600 id = 15 }
      name  = "HMS Gotland"
      type  = light_cruiser
      model = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 29600 id = 16 }
      name  = "1. Jagarflottiljen"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 29600 id = 17 }
      name  = "1. Trängflottiljen"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { location = 101 # Berga/Muskö
    base     = 101
    name     = "Ålandshavseskader"
    id       = { type = 29600 id = 18 }
    division =
    { id    = { type = 29600 id = 19 }
      name  = "HMS Äran"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 29600 id = 20 }
      name  = "HMS Tapperheten"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
  }
  navalunit =
  { location = 95 # Karlskronabasen
    base     = 95
    name     = "Karlskrona Avdelningen"
    id       = { type = 29600 id = 21 }
    division =
    { id    = { type = 29600 id = 22 }
      name  = "HMS Oscar II"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 29600 id = 23 }
      name  = "1. Ubåtsflottiljen"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 98 # Göteborgsbasen
    base     = 98
    name     = "Göteborgseskadern"
    id       = { type = 29600 id =24 }
    division =
    { id    = { type = 29600 id = 25 }
      name  = "HMS Manligheten"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 29600 id = 26 }
      name  = "2. Ubåtsflottiljen"
      type  = submarine
      model = 1
    }
  }
	### SWE Air OOB ###
  airunit =
  { location = 101
    base     = 101
    name     = "1a Flygkåren"
    id       = { type = 29600 id = 7 }
    division =
    { id    = { type = 29600 id = 8 }
      name  = "1. Taktiska Bombflyggruppen"
      type  = tactical_bomber
      model = 0
    }
    division =
    { id    = { type = 29600 id = 9 }
      name  = "1. Marinbombflyggruppen"
      type  = naval_bomber
      model = 0
    }
  } 
	province_development = { 
		id = { type = 29600 id = 27 } 
		name = "" 
		progress = 0.0000 
		location = 101 
		cost = 5.0000 
		date = { 
			year = 1941 
			month = march 
			day = 12 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 8 
		done = 0 
		days = 2650 
		days_for_first = 331 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = ic 
		} 
	province_development = { 
		id = { type = 29600 id = 28 } 
		name = "" 
		progress = 0.0000 
		location = 101 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = march 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 29 } 
		name = "" 
		progress = 0.0000 
		location = 126 
		cost = 2.0000 
		date = { 
			year = 1948 
			month = march 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2498 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 30 } 
		name = "" 
		progress = 0.0000 
		location = 113 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = august 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2498 
		days_for_first = 137 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 31 } 
		name = "" 
		progress = 0.0000 
		location = 93 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 32 } 
		name = "" 
		progress = 0.0000 
		location = 98 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 11 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2150 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 33 } 
		name = "" 
		progress = 0.0000 
		location = 122 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = july 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 14 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29600 id = 34 } 
		name = "" 
		progress = 0.0000 
		location = 114 
		cost = 2.0000 
		date = { 
			year = 1939 
			month = july 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 14 
		done = 0 
		days = 1280 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
#	province_development = { 
#		id = { type = 29600 id = 35 } 
#		name = "" 
#		progress = 0.0000 
#		location = 100 
#		cost = 2.0000 
#		date = { 
#			year = 1938 
#			month = february 
#			day = 5 
#			hour = 0 
#			} 
#		manpower = 0.1000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 8 
#		done = 0 
#		days = 758 
#		days_for_first = 110 
#		gearing_bonus = 0.0000 
#		type = infrastructure 
#		} 
#	province_development = { 
#		id = { type = 29600 id = 36 } 
#		name = "" 
#		progress = 0.0000 
#		location = 120 
#		cost = 2.0000 
#		date = { 
#			year = 1938 
#			month = august 
#			day = 10 
#			hour = 0 
#			} 
#		manpower = 0.1000 
#		close_when_finished = yes 
#		waitingforclosure = no 
#		total_progress = 0.0000 
#		size = 8 
#		done = 0 
#		days = 758 
#		days_for_first = 137 
#		gearing_bonus = 0.0000 
#		type = infrastructure 
#		} 
	province_development = { 
		id = { type = 29600 id = 37 } 
		name = "" 
		progress = 0.0000 
		location = 97 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = may 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 14 
		done = 0 
		days = 1280 
		days_for_first = 137 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
