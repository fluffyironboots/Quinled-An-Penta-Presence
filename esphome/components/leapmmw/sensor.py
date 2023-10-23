import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import binary_sensor
from esphome.const import CONF_UID
from . import leapmmw_ns

DEPENDENCIES = ["leapmmw"]

CONF_leapmmw_ID = "leapmmw"
leapmmw = leapmmw_ns.class_(
    "leapmmw", binary_sensor.BinarySensor
)


async def to_code(config):
    var = await binary_sensor.new_binary_sensor(config)

    hub = await cg.get_variable(config[CONF_leapmmw_ID])
    cg.add(hub.register_card(var))
    cg.add(var.set_id(config[CONF_UID]))