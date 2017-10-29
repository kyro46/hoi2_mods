
##############################
# Country definition for LIB #
##############################

province =
{ id         = 992
  anti_air   = 1
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 4 current_size = 4 }
}              # Monrovia

#####################
# Country main data #
#####################

country =
{ tag                    = LIB
  puppet                 = USA
  control                = USA
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2000 
  supply = 0.2000 
  production = 0.6000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 992
  manpower               = 6.9 # 7 - building queue
  transports             = 10
  escorts                = 1
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 5
    freedom           = 3
    free_market       = 4
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  nationalprovinces      = { 992 }
  ownedprovinces         = { 992 }
  controlledprovinces    = { 992 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5080 }
  diplomacy =
  { relation = { tag = PHI value = 200 }
    relation = { tag = ENG value = 5 }
	relation = { tag = FRA value = 5 }
	relation = { tag = USA value = 200 }
	relation = { tag = GER value = 8 }
  }
  headofstate            = { type = 9 id = 69001 }
  headofgovernment       = { type = 9 id = 69002 }
  foreignminister        = { type = 9 id = 69003 }
  armamentminister       = { type = 9 id = 69004 }
  ministerofsecurity     = { type = 9 id = 69005 }
  ministerofintelligence = { type = 9 id = 69006 }
  chiefofstaff           = { type = 9 id = 69007 }
  chiefofarmy            = { type = 9 id = 69008 }
  chiefofnavy            = { type = 9 id = 69009 }
  chiefofair             = { type = 9 id = 69010 }
  landunit =
  { location = 992
    id       = { type = 25500 id = 1 }
    name     = "Army of Liberia"
    division =
    { id       = { type = 25500 id = 2 }
      name     = "1st Republican Guards Div."
      type     = infantry
      extra    = artillery
      strength = 100
    }
    division =
    { id       = { type = 25500 id = 3 }
      name     = "2nd Republican Guards Div."
      type     = infantry
      strength = 100
    }
  } 
	province_development = { 
		id = { type = 25500 id = 4 } 
		name = "" 
		progress = 0.0000 
		location = 992 
		cost = 2.0000 
		date = { 
			year = 1955 
			month = march 
			day = 1 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2760 
		days_for_first = 270 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
