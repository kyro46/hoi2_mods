
##############################
# Country definition for TUR #
##############################

province =
{ id         = 439
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Izmit
province =
{ id       = 448
  anti_air = 4
  air_base = { size = 6 current_size = 6 }
}            # Ankara

#####################
# Country main data #
#####################

country =
{ tag                    = TUR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.2380 
  supply = 0.1190 
  production = 0.6430 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 448
  manpower               = 162.9 # 165 - building queue
  transports             = 35
  escorts                = 10
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  nationalprovinces      = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 444 }
  ownedprovinces         = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  controlledprovinces    = { 409 408 437 438 439 441 442 443 448 440 449 447 446 445 450 1851 1852 1853 1854 1855 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2400  2510  1010  1190  1110  9010  5010  5080  5090 
                             3190  6210  6300  3010  3020  3070  3130  3400  8010  8020  8040  8050  14000
                           }
  diplomacy =
  { relation = { tag = AFG value = 50 }
    relation = { tag = AUS value = 5 }
	relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation = { tag = HUN value = 11 }
	relation =
    { tag        = GRE
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = ITA value = 3 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation =
    { tag        = ROM
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SCH value = -18 }
	relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
    relation =
    { tag        = YUG
      value      = 100
      guaranteed = { day = 30 month = december year = 1934 }
    }
  }
  headofstate            = { type = 9 id = 12001 }
  headofgovernment       = { type = 9 id = 12002 }
  foreignminister        = { type = 9 id = 12003 }
  armamentminister       = { type = 9 id = 12004 }
  ministerofsecurity     = { type = 9 id = 12005 }
  ministerofintelligence = { type = 9 id = 12006 }
  chiefofstaff           = { type = 9 id = 12007 }
  chiefofarmy            = { type = 9 id = 12008 }
  chiefofnavy            = { type = 9 id = 12009 }
  chiefofair             = { type = 9 id = 12010 }
	### Turkey Land OOB ###
  landunit =
  { location = 448
    name     = "I. Topluluk"
    id       = { type = 11700 id = 8 }
    division =
    { id           = { type = 11700 id = 9 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "1. Piyade Dagitim"
    }
    division =
    { id           = { type = 11700 id = 10 }
      type         = infantry
      extra        = artillery
      strength     = 100
      organisation = 30
      name         = "3. Piyade Dagitim"
    }
  }
  landunit =
  { location = 409
    name     = "II. Topluluk"
    id       = { type = 11700 id = 11 }
    division =
    { id           = { type = 11700 id = 12 }
      type         = infantry
      extra        = anti_air
      strength     = 100
      organisation = 30
      name         = "5. Piyade Dagitim"
    }
  }
  landunit =
  { location = 408
    name     = "III. Topluluk"
    id       = { type = 11700 id = 13 }
    division =
    { id           = { type = 11700 id = 14 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "7. Piyade Dagitim"
    }
  }
  landunit =
  { location = 445
    name     = "IV. Topluluk"
    id       = { type = 11700 id = 15 }
    division =
    { id           = { type = 11700 id = 16 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "9. Piyade Dagitim"
    }
  }
  landunit =
  { location = 450
    name     = "V. Topluluk"
    id       = { type = 11700 id = 17 }
    division =
    { id           = { type = 11700 id = 18 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "11. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1851
    name     = "VI. Topluluk"
    id       = { type = 11700 id = 19 }
    division =
    { id           = { type = 11700 id = 20 }
      type         = infantry
      extra        = anti_air
      strength     = 100
      organisation = 30
      name         = "13. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1855
    name     = "VII. Topluluk"
    id       = { type = 11700 id = 21 }
    division =
    { id           = { type = 11700 id = 22 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "15. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1854
    name     = "VIII. Topluluk"
    id       = { type = 11700 id = 23 }
    division =
    { id           = { type = 11700 id = 24 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "17. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1852
    name     = "IX. Topluluk"
    id       = { type = 11700 id = 25 }
    division =
    { id           = { type = 11700 id = 26 }
      type         = infantry
      strength     = 100
      organisation = 30
      name         = "19. Piyade Dagitim"
    }
  }
  landunit =
  { location = 1853
    name     = "X. Topluluk"
    id       = { type = 11700 id = 27 }
    division =
    { id           = { type = 11700 id = 28 }
      type         = bergsjaeger
      extra        = anti_tank
      strength     = 80
      organisation = 30
      name         = "1. Dagci Tugay"
    }
  }
  landunit =
  { location = 442
    name     = "Türkce Süvari Topluluk"
    id       = { type = 11700 id = 29 }
    division =
    { id           = { type = 11700 id = 30 }
      type         = cavalry
      extra        = artillery
      strength     = 100
      organisation = 30
      name         = "1. Süvari Dagitim"
    }
    division =
    { id           = { type = 11700 id = 31 }
      type         = cavalry
      strength     = 100
      organisation = 30
      name         = "3. Süvari Dagitim"
    }
    division =
    { id           = { type = 11700 id = 32 }
      type         = cavalry
      strength     = 50
      organisation = 30
      name         = "5. Yedek Süvari Dagitim"
    }
  }
  # #####Turkey `36 ######
  navalunit =
  { location = 439
    base     = 439
    name     = "Türkce Deniz Filosu"
    id       = { type = 11700 id = 1 }
    division =
    { id    = { type = 11700 id = 3 }
      name  = "TCG Yavuz"
      type  = battlecruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
    }
    division =
    { id    = { type = 11700 id = 4 }
      name  = "TCG Hamidieh"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 11700 id = 5 }
      name  = "TCG Medjidieh"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 11700 id = 7 }
      name  = "1. Filotilla Torpido Ve Denizalti"
      type  = destroyer
      model = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 11700 id = 6 }
      name  = "1. Filotilla Denizalti Kücük"
      type  = submarine
      model = 0
    }
    division =
    { id   = { type = 11700 id = 2 }
      name = "Reschid Pasha Kücük Filotilla"
      type = transport
    }
  }
  airunit =
  { location = 448
    base     = 448
    name     = "I. Türkce Hava Topluluk"
    id       = { type = 11700 id = 33 }
    division =
    { id           = { type = 11700 id = 34 }
      type         = interceptor
      model        = 0
      strength     = 48
      organisation = 30
      name         = "1. Avci Ucagi Grup"
    }
    division =
    { id           = { type = 11700 id = 35 }
      type         = tactical_bomber
      model        = 0
      strength     = 52
      organisation = 30
      name         = "1. Taktik Bombardiman Ucagi Grup"
    }
  } 
	province_development = { 
		id = { type = 11700 id = 36 } 
		name = "" 
		progress = 0.0000 
		location = 448 
		cost = 5.0000 
		date = { 
			year = 1945 
			month = march 
			day = 10 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 3312 
		days_for_first = 331 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 11700 id = 37 } 
		name = "" 
		progress = 0.0000 
		location = 448 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = december 
			day = 4 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 110 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 38 } 
		name = "" 
		progress = 0.0000 
		location = 409 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = june 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 165 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 39 } 
		name = "" 
		progress = 0.0000 
		location = 438 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 40 } 
		name = "" 
		progress = 0.0000 
		location = 447 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2870 
		days_for_first = 165 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 41 } 
		name = "" 
		progress = 0.0000 
		location = 1852 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = november 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2870 
		days_for_first = 165 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 42 } 
		name = "" 
		progress = 0.0000 
		location = 445 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 43 } 
		name = "" 
		progress = 0.0000 
		location = 439 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = june 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 165 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 44 } 
		name = "" 
		progress = 0.0000 
		location = 450 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 45 } 
		name = "" 
		progress = 0.0000 
		location = 1855 
		cost = 2.0000 
		date = { 
			year = 1955 
			month = november 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2870 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 46 } 
		name = "" 
		progress = 0.0000 
		location = 443 
		cost = 2.0000 
		date = { 
			year = 1953 
			month = june 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 275 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 11700 id = 47 } 
		name = "" 
		progress = 0.0000 
		location = 408 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = june 
			day = 13 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2518 
		days_for_first = 165 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
}
