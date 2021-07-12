
##############################
# Country definition for CHL #
##############################

province =
{ id         = 840
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 4 current_size = 4 }
}              # Santiago

#####################
# Country main data #
#####################

country =
{ tag                    = CHL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  consumer = 0.2583 
  supply = 0.0833 
  production = 0.6584 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 840
  manpower               = 13.7 # 15 - building queue
  transports             = 40
  escorts                = 6
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 839 840 841 842 856 860 861 864 }
  ownedprovinces         = { 839 840 841 842 856 860 861 864 }
  controlledprovinces    = { 839 840 841 842 856 860 861 864 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5020 5080 5090 5190 3020 3260 3410 6210 6300 3010 3070 3130
                             3250 3400 8010 8020 8040 8050
                           }
  diplomacy =
  { relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 44001 }
  headofgovernment       = { type = 9 id = 44002 }
  foreignminister        = { type = 9 id = 44003 }
  armamentminister       = { type = 9 id = 44004 }
  ministerofsecurity     = { type = 9 id = 44005 }
  ministerofintelligence = { type = 9 id = 44006 }
  chiefofstaff           = { type = 9 id = 44007 }
  chiefofarmy            = { type = 9 id = 44008 }
  chiefofnavy            = { type = 9 id = 44009 }
  chiefofair             = { type = 9 id = 44010 }
  landunit =
  { id       = { type = 12500 id = 1 }
    name     = "Ejercito de Chile"
    location = 840
    division =
    { id       = { type = 12500 id = 2 }
      name     = "1. División de Infantería"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 12500 id = 3 }
      name     = "2. División de Infantería"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 4 }
      name     = "1. División de Montaña de Chile"
      strength = 100
      type     = bergsjaeger
      model    = 0
    }
    division =
    { id       = { type = 12500 id = 5 }
      name     = "División Caballería nro. 1"
      strength = 100
      type     = cavalry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 12500 id = 6 }
    name     = "Armada de Chile"
    location = 840
    base     = 840
    division =
    { id    = { type = 12500 id = 7 }
      name  = "Flotilla des Destructores nro. 1"
      type  = destroyer
      model = 1
      extra1 = naval_anti_air_s
      brigade_model1 = 0
    }
    division =
    { id    = { type = 12500 id = 9 }
      name  = "BACH Almirante Latorre"
      type  = battleship
      model = 1
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      extra4 = none
      extra5 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
      brigade_model4 = 0
      brigade_model5 = 0
    }
    division =
    { id    = { type = 12500 id = 8 }
      name  = "BACH General O'Higgins"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_fire_controll_l
      extra3 = naval_anti_air_l
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12500 id = 10 }
      name  = "BACH  Blanco Encalada"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12500 id = 11 }
      name  = "BACH  Chacabuco"
      type  = light_cruiser
      model = 0
      extra1 = naval_anti_air_s
      extra2 = naval_fire_controll_s
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12500 id = 12 }
      name  = "Flotilla des Submarinos nro. 1"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 12500 id = 13 }
      name  = "Flotilla des Submarinos nro. 2"
      type  = submarine
      model = 1
    }
  } 
	province_development = { 
		id = { type = 12500 id = 14 } 
		name = "" 
		progress = 0.0000 
		location = 840 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = october 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 265 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12500 id = 15 } 
		name = "" 
		progress = 0.0000 
		location = 839 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = october 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 265 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 12500 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 840 
		cost = 5.0000 
		date = { 
			year = 1938 
			month = august 
			day = 21 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 3 
		done = 0 
		days = 950 
		days_for_first = 317 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 12500 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 856 
		cost = 2.0000 
		date = { 
			year = 1947 
			month = october 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2389 
		days_for_first = 265 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		}
}
