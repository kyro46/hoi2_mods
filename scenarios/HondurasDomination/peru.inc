
##############################
# Country definition for PRU #
##############################

province =
{ id         = 830
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Lima

#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2373 
  supply = 0.0991 
  production = 0.6636 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 830
  manpower               = 21.7 # 22 - building queue
  transports             = 12
  escorts                = 2
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 816 818 830 821 829 831 }
  ownedprovinces         = { 816 821 829 830 831 }
  controlledprovinces    = { 816 821 829 830 831 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 3130 3410 6010 3010 3070 3400 8020 8040 8050 }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 39001 }
  headofgovernment       = { type = 9 id = 39002 }
  foreignminister        = { type = 9 id = 39003 }
  armamentminister       = { type = 9 id = 39004 }
  ministerofsecurity     = { type = 9 id = 39005 }
  ministerofintelligence = { type = 9 id = 39006 }
  chiefofstaff           = { type = 9 id = 39007 }
  chiefofarmy            = { type = 9 id = 39008 }
  chiefofnavy            = { type = 9 id = 39009 }
  chiefofair             = { type = 9 id = 39010 }
  landunit =
  { id       = { type = 17600 id = 1 }
    name     = "Ejercito del Peru"
    location = 830
    division =
    { id       = { type = 17600 id = 2 }
      name     = "1a Div. de Inf. del Peru 'Bolognesi'"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 3 }
      name     = "2a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 4 }
      name     = "3a Div. de Infantería del Peru"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 17600 id = 5 }
      name     = "1a Brigada Fuerzas Especiales"
      strength = 100
      type     = bergsjaeger
    }
  }
  navalunit =
  { id       = { type = 17600 id = 6 }
    name     = "Marina del Guerra del Peru"
    location = 830
    base     = 830
    # Two DDs:
    division =
    { id    = { type = 17600 id = 7 }
      name  = "Suliana é Flotilla"
      type  = destroyer
      model = 0
    }
    # Built 1907:
    division =
    { id    = { type = 17600 id = 8 }
      name  = "ARP Almirante Grau"
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
    { id    = { type = 17600 id = 9 }
      name  = "ARP Coronel Bolognesi"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 0
      brigade_model3 = 0
    }
    # Submarine division:
    division =
    { id    = { type = 17600 id = 10 }
      name  = "Tacna é Flotilla"
      type  = submarine
      model = 1
    }
  } 
	province_development = { 
		id = { type = 17600 id = 11 } 
		name = "" 
		progress = 0.0000 
		location = 830 
		cost = 2.0000 
		date = { 
			year = 1949 
			month = april 
			day = 29 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2715 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 17600 id = 12 } 
		name = "" 
		progress = 0.0000 
		location = 816 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = november 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2715 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 17600 id = 13 } 
		name = "" 
		progress = 0.0000 
		location = 831 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = november 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2715 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
