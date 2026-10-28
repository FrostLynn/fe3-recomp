#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DE7108
// Address: 0x1de7108 - 0x1de7230
void sub_01DE7108_0x1de7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE7108_0x1de7108");
#endif

    switch (ctx->pc) {
        case 0x1de712cu: goto label_1de712c;
        case 0x1de7140u: goto label_1de7140;
        default: break;
    }

    ctx->pc = 0x1de7108u;

    // 0x1de7108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de7108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de710c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de710cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de7110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de7110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de7114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de7114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1de7118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de7118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de711c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de7120: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de7120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de7124: 0xc779b88  jal         func_1DE6E20
    ctx->pc = 0x1DE7124u;
    SET_GPR_U32(ctx, 31, 0x1DE712Cu);
    ctx->pc = 0x1DE7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7124u;
    // 0x1de7128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E20u, 0x1DE7124u, 0x1DE712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE712Cu;
label_1de712c:
    // 0x1de712c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de712cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de7130: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de7130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de7134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7138: 0xc779b86  jal         func_1DE6E18
    ctx->pc = 0x1DE7138u;
    SET_GPR_U32(ctx, 31, 0x1DE7140u);
    ctx->pc = 0x1DE713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7138u;
    // 0x1de713c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E18u, 0x1DE7138u, 0x1DE7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7140u;
label_1de7140:
    // 0x1de7140: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1de7140u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de7144: 0x91af0432  lbu         $t7, 0x432($t5)
    ctx->pc = 0x1de7144u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
    // 0x1de7148: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE7148u;
    {
        const bool branch_taken_0x1de7148 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7148u;
        // 0x1de714c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7148) {
            ctx->pc = 0x1DE716Cu;
            goto label_1de716c;
        }
    }
    ctx->pc = 0x1DE7150u;
    // 0x1de7150: 0x91af0428  lbu         $t7, 0x428($t5)
    ctx->pc = 0x1de7150u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1064)));
    // 0x1de7154: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE7154u;
    {
        const bool branch_taken_0x1de7154 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7154) {
            ctx->pc = 0x1DE7158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7154u;
            // 0x1de7158: 0x91af0433  lbu         $t7, 0x433($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1075)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7170u;
            goto label_1de7170;
        }
    }
    ctx->pc = 0x1DE715Cu;
    // 0x1de715c: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1de715cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1de7160: 0x19e00002  blez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE7160u;
    {
        const bool branch_taken_0x1de7160 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1DE7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7160u;
        // 0x1de7164: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7160) {
            ctx->pc = 0x1DE716Cu;
            goto label_1de716c;
        }
    }
    ctx->pc = 0x1DE7168u;
    // 0x1de7168: 0xa1af0429  sb          $t7, 0x429($t5)
    ctx->pc = 0x1de7168u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1065), (uint8_t)GPR_U32(ctx, 15));
label_1de716c:
    // 0x1de716c: 0x91af0433  lbu         $t7, 0x433($t5)
    ctx->pc = 0x1de716cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1075)));
label_1de7170:
    // 0x1de7170: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DE7170u;
    {
        const bool branch_taken_0x1de7170 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7170u;
        // 0x1de7174: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7170) {
            ctx->pc = 0x1DE71E0u;
            goto label_1de71e0;
        }
    }
    ctx->pc = 0x1DE7178u;
    // 0x1de7178: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1de7178u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1de717c: 0x25ec0070  addiu       $t4, $t7, 0x70
    ctx->pc = 0x1de717cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1de7180: 0x8d8e0014  lw          $t6, 0x14($t4)
    ctx->pc = 0x1de7180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x1de7184: 0x91cf6426  lbu         $t7, 0x6426($t6)
    ctx->pc = 0x1de7184u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 25638)));
    // 0x1de7188: 0x51eb0001  beql        $t7, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE7188u;
    {
        const bool branch_taken_0x1de7188 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x1de7188) {
            ctx->pc = 0x1DE718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7188u;
            // 0x1de718c: 0xa1ab042a  sb          $t3, 0x42A($t5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 13), 1066), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7190u;
            goto label_1de7190;
        }
    }
    ctx->pc = 0x1DE7190u;
label_1de7190:
    // 0x1de7190: 0x8d8f0014  lw          $t7, 0x14($t4)
    ctx->pc = 0x1de7190u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x1de7194: 0x91ee67b6  lbu         $t6, 0x67B6($t7)
    ctx->pc = 0x1de7194u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 26550)));
    // 0x1de7198: 0x51cb0001  beql        $t6, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE7198u;
    {
        const bool branch_taken_0x1de7198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 11));
        if (branch_taken_0x1de7198) {
            ctx->pc = 0x1DE719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7198u;
            // 0x1de719c: 0xa1ab042b  sb          $t3, 0x42B($t5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 13), 1067), (uint8_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE71A0u;
            goto label_1de71a0;
        }
    }
    ctx->pc = 0x1DE71A0u;
label_1de71a0:
    // 0x1de71a0: 0x8d8f0014  lw          $t7, 0x14($t4)
    ctx->pc = 0x1de71a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x1de71a4: 0x91ef6b46  lbu         $t7, 0x6B46($t7)
    ctx->pc = 0x1de71a4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 27462)));
    // 0x1de71a8: 0x51eb0001  beql        $t7, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE71A8u;
    {
        const bool branch_taken_0x1de71a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x1de71a8) {
            ctx->pc = 0x1DE71ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE71A8u;
            // 0x1de71ac: 0xa1af042c  sb          $t7, 0x42C($t5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 13), 1068), (uint8_t)GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE71B0u;
            goto label_1de71b0;
        }
    }
    ctx->pc = 0x1DE71B0u;
label_1de71b0:
    // 0x1de71b0: 0x91af042a  lbu         $t7, 0x42A($t5)
    ctx->pc = 0x1de71b0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1066)));
    // 0x1de71b4: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE71B4u;
    {
        const bool branch_taken_0x1de71b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de71b4) {
            ctx->pc = 0x1DE71B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE71B4u;
            // 0x1de71b8: 0x91af0432  lbu         $t7, 0x432($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE71E4u;
            goto label_1de71e4;
        }
    }
    ctx->pc = 0x1DE71BCu;
    // 0x1de71bc: 0x91af042b  lbu         $t7, 0x42B($t5)
    ctx->pc = 0x1de71bcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1067)));
    // 0x1de71c0: 0x51e00008  beql        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE71C0u;
    {
        const bool branch_taken_0x1de71c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de71c0) {
            ctx->pc = 0x1DE71C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE71C0u;
            // 0x1de71c4: 0x91af0432  lbu         $t7, 0x432($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE71E4u;
            goto label_1de71e4;
        }
    }
    ctx->pc = 0x1DE71C8u;
    // 0x1de71c8: 0x91af042c  lbu         $t7, 0x42C($t5)
    ctx->pc = 0x1de71c8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1068)));
    // 0x1de71cc: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE71CCu;
    {
        const bool branch_taken_0x1de71cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de71cc) {
            ctx->pc = 0x1DE71D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE71CCu;
            // 0x1de71d0: 0x91af0432  lbu         $t7, 0x432($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE71E4u;
            goto label_1de71e4;
        }
    }
    ctx->pc = 0x1DE71D4u;
    // 0x1de71d4: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1de71d4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1de71d8: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1de71d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1de71dc: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1de71dcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de71e0:
    // 0x1de71e0: 0x91af0432  lbu         $t7, 0x432($t5)
    ctx->pc = 0x1de71e0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1074)));
label_1de71e4:
    // 0x1de71e4: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE71E4u;
    {
        const bool branch_taken_0x1de71e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE71E4u;
        // 0x1de71e8: 0x240f000f  addiu       $t7, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de71e4) {
            ctx->pc = 0x1DE7204u;
            goto label_1de7204;
        }
    }
    ctx->pc = 0x1DE71ECu;
    // 0x1de71ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1de71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1de71f0: 0x104f0005  beq         $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE71F0u;
    {
        const bool branch_taken_0x1de71f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE71F0u;
        // 0x1de71f4: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de71f0) {
            ctx->pc = 0x1DE7208u;
            goto label_1de7208;
        }
    }
    ctx->pc = 0x1DE71F8u;
    // 0x1de71f8: 0x8d4f081c  lw          $t7, 0x81C($t2)
    ctx->pc = 0x1de71f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 2076)));
    // 0x1de71fc: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE71FCu;
    {
        const bool branch_taken_0x1de71fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de71fc) {
            ctx->pc = 0x1DE7200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE71FCu;
            // 0x1de7200: 0xada205a0  sw          $v0, 0x5A0($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 1440), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7204u;
            goto label_1de7204;
        }
    }
    ctx->pc = 0x1DE7204u;
label_1de7204:
    // 0x1de7204: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1de7208:
    // 0x1de7208: 0x2405f6e0  addiu       $a1, $zero, -0x920
    ctx->pc = 0x1de7208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964960));
    // 0x1de720c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de720cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de7210: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de7210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de7214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de7214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de7218: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de7218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de721c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de7220: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de7220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de7224: 0x8779b98  j           func_1DE6E60
    ctx->pc = 0x1DE7224u;
    ctx->pc = 0x1DE7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7224u;
    // 0x1de7228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E60u;
    sub_01DE6E60_0x1de6e60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE722Cu;
    // 0x1de722c: 0x0  nop
    ctx->pc = 0x1de722cu;
    // NOP
    ctx->pc = 0x1de7230u;
}
