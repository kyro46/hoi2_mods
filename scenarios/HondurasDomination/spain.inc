
##############################
# Country definition for SPR #
##############################

province =
{ id         = 334
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # La Coruña
province =
{ id       = 341
  anti_air = 3
  air_base = { size = 2 current_size = 2 }
}            # Madrid
province =
{ id         = 347
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Seville
province =
{ id         = 354
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 2 current_size = 2 }
}              # València
province =
{ id         = 356
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
}              # Tarragona
province =
{ id         = 535
  anti_air   = 2
  naval_base = { size = 7 current_size = 7 }
  air_base   = { size = 4 current_size = 4 }
  supplypool = 10
}              # Mallorca
province = { id = 957 supplypool = 15 } # Ceuta
province =
{ id         = 963
  naval_base = { size = 1 current_size = 1 }
  air_base   = { size = 2 current_size = 2 }
  oilpool    = 50
  supplypool = 20
}              # Gran Canaria
province =
{ id         = 972
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  supplypool = 5
}              # Villa Cisneros
province = { id = 1091 supplypool = 5 } # Bata

#####################
# Country main data #
#####################

country =
{ tag                    = SPR
  regular_id             = SPA
  intrinsic_gov_type     = left_wing_radical
  manpower               = 246.9 # 250 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 450
  supplies               = 445
  money                  = 20
  consumer = 0.3000 
  supply = 0.1375 
  production = 0.5625 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  dissent                = 30
  capital                = 341
  transports             = 100
  escorts                = 27
  # Gibralter claim
  diplomacy =
  { relation = { tag = ENG value = -10 }
    relation = { tag = FIN value = 35 }
    relation = { tag = SWE value = 2 }
	relation = { tag = FRA value = 10 }
    relation = { tag = GER value = -50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = -50 }
    relation = { tag = POR value = -50 }
    relation = { tag = SOV value = -10 }
	relation = { tag = POL value = -13 }
	relation = { tag = SCH value = 2}
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 1 }
  SpyInfo                = { country = "MEX" NumberOfSpies = 1 }
  SpyInfo                = { country = "USA" NumberOfSpies = 2 }
  SpyInfo                = { country = "ECU" NumberOfSpies = 1 }
  SpyInfo                = { country = "VEN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "COL" NumberOfSpies = 2 }
  SpyInfo                = { country = "POR" NumberOfSpies = 4 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  nationalprovinces      = { 329 330 331 332 333 334 338 339 340 341 342 343 346 347 348 349 350 351 352 353 354 355 356 357
							 535 536 537 954 955 957 961 962 963 964 965
                           }
  ownedprovinces         = { 329 330 331 332 333 334 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357
                             535 536 537 954 955 957 961 962 963 964 965 967 971 972 1091
                           }
  controlledprovinces    = { 329 330 331 332 333 334 338 339 340 341 342 343 346 347 349 350 351 352 353 354 355 356 357
                             535 536 537 954 955 957 961 962 963 964 965 967 971 972 1091
                           }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2020 2400 2290 2300 2310 4220 2450 2460 4130 2510 3260 1010 1190 1110 9010 5010 5080 5090 5190
                             6010 6020 3010 3020 3070 3080 3130 3140 3250 3400 3410 8010 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 1
    freedom           = 7
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 11001 }
  headofgovernment       = { type = 9 id = 11002 }
  foreignminister        = { type = 9 id = 11003 }
  armamentminister       = { type = 9 id = 11004 }
  ministerofsecurity     = { type = 9 id = 11005 }
  ministerofintelligence = { type = 9 id = 11006 }
  chiefofstaff           = { type = 9 id = 11007 }
  chiefofarmy            = { type = 9 id = 11008 }
  chiefofnavy            = { type = 9 id = 11009 }
  chiefofair             = { type = 9 id = 11010 }
  dormant_leaders        = { 3007 3050 }
  ### Spanish land OOB ###
  landunit =
  { id       = { type = 27600 id = 1 }
    location = 971
    name     = "Fuerzas del Sahara"
    division =
    { id       = { type = 27600 id = 2 }
      name     = "Legión del Sahara"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 3 }
    location = 1091
    name     = "Guardias Coloniales"
    division =
    { id       = { type = 27600 id = 4 }
      name     = "Guardias Coloniales"
      type     = militia
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 5 }
    location = 341
    name     = "1a Cuerpo de Ejército"
    division =
    { id   = { type = 27600 id = 6 }
      name = "1a División Orgánica"
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 7 }
      name  = "2a División Orgánica"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 27600 id = 8 }
      name = "1a División de Caballería"
      type = cavalry
    }
    division =
    { id       = { type = 27600 id = 9 }
      name     = "Brigada Blindada"
      type     = light_armor
      model    = 0
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 10 }
    location = 356
    name     = "2o Cuerpo del Ejército"
    division =
    { id    = { type = 27600 id = 11 }
      name  = "3a División Orgánica"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 27600 id = 12 }
      name = "4a División Orgánica"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 13 }
      name = "5a División Orgánica"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 14 }
      name = "Brigadas de Montaña"
      type = bergsjaeger
    }
  }
  landunit =
  { id       = { type = 27600 id = 15 }
    location = 354
    name     = "3er Cuerpo de Ejército"
    division =
    { id    = { type = 27600 id = 16 }
      name  = "6a División Orgánica"
      type  = infantry
      extra = anti_air
    }
    division =
    { id   = { type = 27600 id = 17 }
      name = "7a División Orgánica"
      type = infantry
    }
    division =
    { id    = { type = 27600 id = 18 }
      name  = "8a División Orgánica"
      type  = infantry
      extra = artillery
    }
  }
  landunit =
  { id       = { type = 27600 id = 19 }
    location = 535
    name     = "Comandancia de Baleares"
    division =
    { id       = { type = 27600 id = 20 }
      name     = "Comandancia de Baleares"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 21 }
    location = 963
    name     = "Comandancia de Canarias"
    division =
    { id       = { type = 27600 id = 22 }
      name     = "Comandancia de Canarias"
      type     = infantry
      strength = 30
    }
  }
  landunit =
  { id       = { type = 27600 id = 23 }
    location = 957
    name     = "Ejército de África"
    division =
    { id   = { type = 27600 id = 24 }
      name = "Circunscripción Occidental"
      type = infantry
    }
    division =
    { id   = { type = 27600 id = 25 }
      name = "Circunscripción Oriental"
      type = infantry
    }
  }
	### Spanish Navy OOB ###
  # Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.
    
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 26 }
    name     = "Grupo C"
    division =
    { id       = { type = 27600 id = 27 }
      name     = "S101 Flotilla"
      strength = 100
      type     = submarine
      model    = 0
    }
  }
  navalunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 28 }
    name     = "Grupo B"
    division =
    { id       = { type = 27600 id = 29 }
      name     = "S103 Flotilla"
      strength = 75
      type     = submarine
      model    = 1
    }
  }
navalunit =
  { location = 347
    base     = 347
    id       = { type = 27600 id = 30 }
    name     = "Base Naval Cádiz"
    division =
    { id       = { type = 27600 id = 31 }
      name     = "República"
      strength = 60
      type     = light_cruiser
      model    = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 32 }
      name     = "Flotilla de Escolta"
      strength = 100
      type     = destroyer
      model    = 1
    }
  }
  navalunit =
  { location = 334
    base     = 334
    id       = { type = 27600 id = 33 }
    name     = "Flotilla Méndez Núñez"
    division =
    { id       = { type = 27600 id = 34 }
      name     = "Méndez Núñez"
      strength = 100
      type     = light_cruiser
      model    = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
  navalunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 35 }
    name     = "Escuadrón de Batalla"
    division =
    { id       = { type = 27600 id = 36 }
      name     = "Jaime I"
      strength = 50
      type     = battleship
      model    = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id       = { type = 27600 id = 37 }
      name     = "España"
      strength = 100
      type     = battleship
      model    = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id       = { type = 27600 id = 38 }
      name     = "Miguel de Cervantes"
      strength = 100
      type     = light_cruiser
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 39 }
      name     = "Almirante Cervera"
      strength = 100
      type     = light_cruiser
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id       = { type = 27600 id = 40 }
      name     = "Flotilla de Torpederas No. 1"
      strength = 100
      type     = destroyer
      model    = 0
    }
    division =
    { id       = { type = 27600 id = 41 }
      name     = "Flotilla de Torpederas No. 2"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 42 }
      name     = "1a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 43 }
      name     = "2a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 44 }
    name     = "Armada Colonial"
    division =
    { id       = { type = 27600 id = 45 }
      name     = "Flotilla de Torpederas No. 3"
      strength = 100
      type     = destroyer
      model    = 1
    }
    division =
    { id       = { type = 27600 id = 46 }
      name     = "3a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
    division =
    { id       = { type = 27600 id = 47 }
      name     = "4a Flotilla de Transporte Naval"
      strength = 100
      type     = transport
    }
  }
  navalunit =
  { id       = { type = 27600 id = 48 }
    name     = "Libertad"
    location = 356
    base     = 356
    division =
    { id       = { type = 27600 id = 49 }
      name     = "Libertad"
      type     = light_cruiser
      model    = 1
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
      strength = 100
    }
  }
	### Spain Air OOB ###
  airunit =
  { location = 341
    base     = 341
    id       = { type = 27600 id = 50 }
    name     = "1a Escuadra Aérea"
    division =
    { id       = { type = 27600 id = 51 }
      name     = "1er Grupo Táctico"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 52 }
      name     = "2o Grupo Táctico"
      strength = 30
      type     = tactical_bomber
    }
  }
  airunit =
  { location = 356
    base     = 356
    id       = { type = 27600 id = 53 }
    name     = "2a Escuadra Aérea"
    division =
    { id       = { type = 27600 id = 54 }
      name     = "1er Grupo de Caza"
      strength = 30
      type     = interceptor
    }
    division =
    { id       = { type = 27600 id = 55 }
      name     = "3er Grupo de Caza"
      strength = 30
      type     = interceptor
    }
  }
  airunit =
  { location = 354
    base     = 354
    id       = { type = 27600 id = 56 }
    name     = "3a Escuadra Aérea"
    division =
    { id       = { type = 27600 id = 57 }
      name     = "1er Grupo Estratégico"
      strength = 30
      type     = strategic_bomber
    }
    division =
    { id       = { type = 27600 id = 58 }
      name     = "2o Grupo Estratégico"
      strength = 30
      type     = strategic_bomber
    }
  }
  airunit =
  { location = 963
    base     = 963
    id       = { type = 27600 id = 59 }
    name     = "Fuerzas Aéreas del África"
    division =
    { id       = { type = 27600 id = 60 }
      name     = "1er Grupo de Bombardeo"
      strength = 30
      type     = tactical_bomber
    }
    division =
    { id       = { type = 27600 id = 61 }
      name     = "2o Grupo de Caza"
      strength = 30
      type     = interceptor
    }
  } 
	### Development ###
	province_development = { 
		id = { type = 27600 id = 64 } 
		name = "" 
		progress = 0.0000 
		location = 341 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2103 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 65 } 
		name = "" 
		progress = 0.0000 
		location = 347 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = october 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2443 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 66 } 
		name = "" 
		progress = 0.0000 
		location = 357 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = october 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 24 
		done = 0 
		days = 2103 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 67 } 
		name = "" 
		progress = 0.0000 
		location = 339 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = october 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2443 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 70 } 
		name = "" 
		progress = 0.0000 
		location = 334 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = august 
			day = 29 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2784 
		days_for_first = 135 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 69 } 
		name = "" 
		progress = 0.0000 
		location = 342 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = october 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2443 
		days_for_first = 108 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 68 } 
		name = "" 
		progress = 0.0000 
		location = 354 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = june 
			day = 19 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 26 
		done = 0 
		days = 2188 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 71 } 
		name = "" 
		progress = 0.0000 
		location = 351 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = march 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2443 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 72 } 
		name = "" 
		progress = 0.0000 
		location = 331 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = february 
			day = 23 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 30 
		done = 0 
		days = 2614 
		days_for_first = 270 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 73 } 
		name = "" 
		progress = 0.0000 
		location = 332 
		cost = 2.0000 
		date = { 
			year = 1955 
			month = april 
			day = 29 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2784 
		days_for_first = 270 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 27600 id = 74 } 
		name = "" 
		progress = 0.0000 
		location = 343 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = march 
			day = 5 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2443 
		days_for_first = 162 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	division_development = { 
		id = { type = 27600 id = 63 } 
		name = "Baleares" 
		progress = 0.0000 
		location = 0 
		cost = 2.5000 
		date = { 
			year = 1936 
			month = february 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.8815 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 290 
		gearing_bonus = 0.0000 
		type = heavy_cruiser 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
	division_development = { 
		id = { type = 27600 id = 62 } 
		name = "Canarias" 
		progress = 0.0000 
		location = 0 
		cost = 2.5000 
		date = { 
			year = 1936 
			month = january 
			day = 26 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.9077 
		size = 1 
		done = 0 
		days = 1 
		days_for_first = 290 
		gearing_bonus = 0.0000 
		type = heavy_cruiser 
		extra = none 
		extra1 = none 
		extra2 = none 
		extra3 = none 
		extra4 = none 
		model = 1 
		brigade_model = 0 
		brigade_model1 = 0 
		brigade_model2 = 0 
		brigade_model3 = 0 
		brigade_model4 = 0 
		} 
}