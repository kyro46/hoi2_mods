
##############################
# Country definition for DOM #
##############################

province =
{ id         = 894
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 1 current_size = 1 }
}              # Santo Domingo

#####################
# Country main data #
#####################

country =
{ tag                    = DOM
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.3167 
  supply = 0.0167 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  manpower               = 6.9 # 8 - building queue
  capital                = 894
  transports             = 10
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 8
    freedom           = 5
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 1
  }
  nationalprovinces      = { 893 894 }
  ownedprovinces         = { 893 894 }
  controlledprovinces    = { 893 894 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  diplomacy =
  { relation = { tag = CUB value = 50 }
    relation = { tag = HAI value = -30 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 49001 }
  headofgovernment       = { type = 9 id = 49002 }
  foreignminister        = { type = 9 id = 49003 }
  armamentminister       = { type = 9 id = 49004 }
  ministerofsecurity     = { type = 9 id = 49005 }
  ministerofintelligence = { type = 9 id = 49006 }
  chiefofstaff           = { type = 9 id = 49007 }
  chiefofarmy            = { type = 9 id = 49008 }
  chiefofnavy            = { type = 9 id = 49009 }
  chiefofair             = { type = 9 id = 49010 }
  landunit =
  { id       = { type = 28000 id = 7501 }
    name     = "Ejercito de Rep. Dominicana"
    location = 894
    division =
    { id       = { type = 28000 id = 7500 }
      name     = "I Brigada de Infantería"
      strength = 50
      type     = infantry
      model    = 0
      extra    = anti_air
    }
  } 
	province_development = { 
		id = { type = 28000 id = 7502 } 
		name = "" 
		progress = 0.0000 
		location = 894 
		cost = 2.0000 
		date = { 
			year = 1940 
			month = september 
			day = 15 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2270 
		days_for_first = 250 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 28000 id = 7503 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1937 
			month = november 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 668 
		days_for_first = 79 
		gearing_bonus = 0.0000 
		type = transports 
		}
}
