
##############################
# Country definition for ARG #
##############################

province =
{ id         = 667
  anti_air   = 5
  naval_base = { size = 5 current_size = 5 }
  air_base   = { size = 3 current_size = 3 }
}              # Buenos Aires
province =
{ id         = 853
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 3 current_size = 3 }
}              # Bahia Blanca

#####################
# Country main data #
#####################

country =
{ tag                    = ARG
  manpower               = 49.4 # 50 - building queue
  transports             = 65
  escorts                = 10
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.2600 
  supply = 0.0800 
  production = 0.5600 
  reinforcement = 0.1000 
  upgrading = 0.0000 
  capital                = 667
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    free_market       = 8
    freedom           = 6
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 3
  }
  nationalprovinces      = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 866 }
  ownedprovinces         = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  controlledprovinces    = { 667 853 852 843 844 845 851 854 855 857 858 859 862 863 865 850 }
  # Semi-Major Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 4130 4190 2150 2010 2290 2300 2310 2450 2460 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020
                             3010 3020 3070 3080 3130 3140 3250 3400 3410 8010 8020 8040 8050
                           }
  diplomacy =
  { relation = { tag = BOL value = 50 }
    relation = { tag = BRA value = -10 }
    relation = { tag = CHL value = -20 }
    relation = { tag = COL value = 10 }
    relation = { tag = ENG value = 75 }
    relation = { tag = ECU value = 10 }
    relation = { tag = GER value = 75 }
    relation = { tag = IRE value = 20 }
    relation = { tag = ITA value = 30 }
    relation = { tag = PAR value = 50 }
    relation = { tag = PRU value = 20 }
    relation = { tag = URU value = -50 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 35001 }
  headofgovernment       = { type = 9 id = 35002 }
  foreignminister        = { type = 9 id = 35003 }
  armamentminister       = { type = 9 id = 35004 }
  ministerofsecurity     = { type = 9 id = 35005 }
  ministerofintelligence = { type = 9 id = 35006 }
  chiefofstaff           = { type = 9 id = 35007 }
  chiefofarmy            = { type = 9 id = 35008 }
  chiefofnavy            = { type = 9 id = 35009 }
  chiefofair             = { type = 9 id = 35010 }
  # Argentine OOB
  landunit =
  { id       = { type = 12000 id = 1 }
    name     = "I Cuerpo de Ejército"
    location = 667 # Buenos Aires
    division =
    { id       = { type = 12000 id = 5 }
      name     = "Supreme HQ"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 12000 id = 2 }
      name     = "III Brigada 'Pellegrini'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 12000 id = 3 }
      name     = "II Brigada 'San Martín'"
      strength = 100
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 12000 id = 4 }
      name     = "I Brigada 'Ing. Krausse'"
      strength = 100
      type     = infantry
    }
  }
  landunit =
  { id       = { type = 12000 id = 6 }
    name     = "II Cuerpo de Ejército"
    location = 667
    division =
    { id       = { type = 12000 id = 7 }
      name     = "VI Brigada de Montaña 'Villegas'"
      strength = 65
      type     = bergsjaeger
    }
    division =
    { id       = { type = 12000 id = 8 }
      name     = "IV Brigada de Infantería"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
  # ################################################
  navalunit =
  { name     = "Argentinian Navy"
    id       = { type = 12000 id = 13 }
    location = 853
    base     = 853
    division =
    { id    = { type = 12000 id = 14 }
      name  = "ARA Veinticinco De Mayo"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      }
    division =
    { id    = { type = 12000 id = 15 }
      name  = "ARA Almirante Brown"
      type  = heavy_cruiser
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 16 }
      name  = "ARA Moreno"
      type  = battleship
      model = 0
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
    { id    = { type = 12000 id = 17 }
      name  = "ARA Rivadavia"
      type  = battleship
      model = 0
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
    { id    = { type = 12000 id = 18 }
      name  = "ARA Independencia"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 19 }
      name  = "ARA La Libertad"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12000 id = 20 }
      name  = "ARA Generale Belgrano"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12000 id = 21 }
      name  = "ARA Generale Pueyrredon"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = none
      brigade_model1 = 1
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12000 id = 22 }
      name  = "1st Destroyer Flotilla"
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 12000 id = 23 }
      name  = "2nd Destroyer Flotilla"
      type  = destroyer
      model = 0
      extra1 = naval_anti_air_s
      brigade_model1 = 1
    }
    division =
    { id    = { type = 12000 id = 24 }
      name  = "1st Submarine Flotilla"
      type  = submarine
      model = 1
    }
  }
  # ################################################
  airunit =
  { id       = { type = 12000 id = 9 }
    name     = "Aviación del Ejército"
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 10 }
      name     = "Grupo Aérea Nro. 1"
      strength = 50
      type     = interceptor
      model    = 0
    }
  }
  airunit =
  { id       = { type = 12000 id = 11 }
    name     = "Aviación Naval"
    location = 667
    base     = 667
    division =
    { id       = { type = 12000 id = 12 }
      name     = "Fuerza Aeronaval Nro. 1"
      strength = 50
      type     = naval_bomber
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 12000 id = 25 } 
		name = "" 
		progress = 0.0000 
		location = 667 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = may 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12000 id = 26 } 
		name = "" 
		progress = 0.0000 
		location = 852 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12000 id = 27 } 
		name = "" 
		progress = 0.0000 
		location = 851 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12000 id = 28 } 
		name = "" 
		progress = 0.0000 
		location = 850 
		cost = 2.0000 
		date = { 
			year = 1942 
			month = february 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2208 
		days_for_first = 96 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12000 id = 29 } 
		name = "" 
		progress = 0.0000 
		location = 845 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = june 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2516 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12000 id = 30 } 
		name = "" 
		progress = 0.0000 
		location = 858 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = june 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2516 
		days_for_first = 144 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
