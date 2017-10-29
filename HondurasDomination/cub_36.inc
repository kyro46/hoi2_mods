
##############################
# Country definition for CUB #
##############################

province =
{ id         = 654
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
}              # Havana

#####################
# Country main data #
#####################

country =
{ tag                    = CUB
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 13.8 # 15 - building queue
  consumer = 0.2857 
  supply = 0.0477 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 654
  transports             = 24
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 654 655 656 657 }
  ownedprovinces         = { 654 655 656 657 }
  controlledprovinces    = { 654 655 656 657 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6010 }
  diplomacy =
  { relation = { tag = DOM value = 50 }
    relation = { tag = ENG value = 30 }
    relation = { tag = HAI value = 30 }
    relation = { tag = USA value = 200 }
  }
  headofstate            = { type = 9 id = 33001 }
  headofgovernment       = { type = 9 id = 33002 }
  foreignminister        = { type = 9 id = 33003 }
  armamentminister       = { type = 9 id = 33004 }
  ministerofsecurity     = { type = 9 id = 33005 }
  ministerofintelligence = { type = 9 id = 33006 }
  chiefofstaff           = { type = 9 id = 33007 }
  chiefofarmy            = { type = 9 id = 33008 }
  chiefofnavy            = { type = 9 id = 33009 }
  chiefofair             = { type = 9 id = 33010 }
  # Firepower
  landunit =
  { id       = { type = 26000 id = 40 }
    name     = "Ejercito de Cuba"
    location = 654
    division =
    { id       = { type = 26000 id = 4000 }
      name     = "1a Brigada de Ejercito"
      strength = 100
      type     = infantry
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 4001 }
      name     = "1a Brigada de Caballería 'Floridita'"
      strength = 100
      type     = cavalry
      model    = 0
      extra    = artillery
    }
  } 
	province_development = { 
		id = { type = 26000 id = 4002 } 
		name = "" 
		progress = 0.0000 
		location = 654 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = december 
			day = 29 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2031 
		days_for_first = 135 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 26000 id = 4003 } 
		name = "" 
		progress = 0.0000 
		location = 655 
		cost = 2.0000 
		date = { 
			year = 1944 
			month = june 
			day = 24 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2031 
		days_for_first = 135 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 26000 id = 4004 } 
		name = "" 
		progress = 0.0000 
		location = 654 
		cost = 2.0000 
		date = { 
			year = 1936 
			month = june 
			day = 4 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 2 
		done = 0 
		days = 154 
		days_for_first = 79 
		gearing_bonus = 0.0000 
		type = air_base 
		}
}
