
##############################
# Country definition for HAI #
##############################

province =
{ id         = 892
  anti_air   = 1
  naval_base = { size = 4 current_size = 4 }
  air_base   = { size = 2 current_size = 2 }
}              # Port-au-Prince

#####################
# Country main data #
#####################

country =
{ tag                    = HAI
  manpower               = 7.9 # 9 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2000 
  supply = 0.0400 
  production = 0.7600 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 892
  transports             = 12
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    free_market       = 4
    freedom           = 2
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  nationalprovinces      = { 892 }
  ownedprovinces         = { 892 }
  controlledprovinces    = { 892 }
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  diplomacy =
  { relation = { tag = CUB value = 30 }
    relation = { tag = DOM value = -30 }
    relation = { tag = USA value = 100 }
  }
  headofstate            = { type = 9 id = 78001 }
  headofgovernment       = { type = 9 id = 78002 }
  foreignminister        = { type = 9 id = 78003 }
  armamentminister       = { type = 9 id = 78004 }
  ministerofsecurity     = { type = 9 id = 78005 }
  ministerofintelligence = { type = 9 id = 78006 }
  chiefofstaff           = { type = 9 id = 78007 }
  chiefofarmy            = { type = 9 id = 78008 }
  chiefofnavy            = { type = 9 id = 78009 }
  chiefofair             = { type = 9 id = 78010 }
  landunit =
  { id       = { type = 17500 id = 5302 }
    name     = "La Grandé Armée du Haiti"
    location = 892
    division =
    { id       = { type = 17500 id = 5301 }
      name     = "1ère Brigade d'Infanterie Haitien"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  } 
	province_development = { 
		id = { type = 17500 id = 5303 } 
		name = "" 
		progress = 0.0000 
		location = 892 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = april 
			day = 14 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2693 
		days_for_first = 300 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	convoy_development = { 
		id = { type = 17500 id = 5304 } 
		name = "" 
		progress = 0.0000 
		location = 0 
		cost = 3.0000 
		date = { 
			year = 1938 
			month = february 
			day = 6 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 756 
		days_for_first = 90 
		gearing_bonus = 0.0000 
		type = transports 
		} 
}
