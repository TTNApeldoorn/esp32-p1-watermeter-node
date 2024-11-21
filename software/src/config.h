/* 
 * Define here your configuration
 * - cyclecount 
 * - LoRa keys
 * - Baudrate Port
 * Marcel Meek, July 2020
 *  update 16-5-2021
 */

#ifndef _CONFIG_h /* Prevent loading library twice */
#define _CONFIG_h

// specify here TTN keys V3
#define APPEUI "70B3D57ED002E7AF"  // buitenbuurt
#define APPKEY "F4E57B1FCDF5117C7189E48699A8311E"
// DEVEU is filled by board id

// define in seconds how often a message will be sent
#define CYCLETIME 600-15         //600 sec

#define VERSION "4.0"

#endif
