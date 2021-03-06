
##############################
# Country definition for PAN #
##############################

province =
{ id         = 888
  anti_air   = 2
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Panam�

#####################
# Country main data #
#####################

country =
{ tag                    = PAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.1800 
  supply = 0.0200 
  production = 0.8000 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 888
  manpower               = 2.9 # 3 - building queue
  transports             = 12
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 4
  }
  nationalprovinces      = { 888 889 }
  ownedprovinces         = { 888 }
  controlledprovinces    = { 888 }
  # ROTW Minor Tech '36
  # Group E 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 1010 1190 5010 5080 5090 }
  diplomacy =
  { relation = { tag = USA value = 175 }
    relation = { tag = COL value = 50 }
  }
  headofstate            = { type = 9 id = 95001 }
  headofgovernment       = { type = 9 id = 95002 }
  foreignminister        = { type = 9 id = 95003 }
  armamentminister       = { type = 9 id = 95004 }
  ministerofsecurity     = { type = 9 id = 95005 }
  ministerofintelligence = { type = 9 id = 95006 }
  chiefofstaff           = { type = 9 id = 95007 }
  chiefofarmy            = { type = 9 id = 95008 }
  chiefofnavy            = { type = 9 id = 95009 }
  chiefofair             = { type = 9 id = 95010 }
  # Improved Construction Engineering
  landunit =
  { id       = { type = 14600 id = 50 }
    name     = "Ejercito de Panama"
    location = 888
    division =
    { id       = { type = 14600 id = 5000 }
      name     = "1a Brigada de Infanter�a"
      strength = 60
      type     = infantry
    }
  } 
	province_development = { 
		id = { type = 14600 id = 51 } 
		name = "" 
		progress = 0.0000 
		location = 888 
		cost = 2.0000 
		date = { 
			year = 1947 
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
		days = 2308 
		days_for_first = 255 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
