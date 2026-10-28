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

// Function: sub_01DD71C8
// Address: 0x1dd71c8 - 0x1dd7378
void sub_01DD71C8_0x1dd71c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD71C8_0x1dd71c8");
#endif

    switch (ctx->pc) {
        case 0x1dd71f8u: goto label_1dd71f8;
        case 0x1dd720cu: goto label_1dd720c;
        case 0x1dd721cu: goto label_1dd721c;
        case 0x1dd7298u: goto label_1dd7298;
        case 0x1dd72bcu: goto label_1dd72bc;
        case 0x1dd72ccu: goto label_1dd72cc;
        case 0x1dd72dcu: goto label_1dd72dc;
        case 0x1dd72e8u: goto label_1dd72e8;
        case 0x1dd7340u: goto label_1dd7340;
        default: break;
    }

    ctx->pc = 0x1dd71c8u;

    // 0x1dd71c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd71c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd71cc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd71ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd71d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd71d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd71d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd71d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd71dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd71e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd71e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd71e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd71e8: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd71ec: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1dd71ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd71f0: 0xc775b0a  jal         func_1DD6C28
    ctx->pc = 0x1DD71F0u;
    SET_GPR_U32(ctx, 31, 0x1DD71F8u);
    ctx->pc = 0x1DD71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD71F0u;
    // 0x1dd71f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C28u, 0x1DD71F0u, 0x1DD71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD71F8u;
label_1dd71f8:
    // 0x1dd71f8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd71f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd71fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd71fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7204: 0xc775b06  jal         func_1DD6C18
    ctx->pc = 0x1DD7204u;
    SET_GPR_U32(ctx, 31, 0x1DD720Cu);
    ctx->pc = 0x1DD7208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7204u;
    // 0x1dd7208: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C18u, 0x1DD7204u, 0x1DD720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD720Cu;
label_1dd720c:
    // 0x1dd720c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd720cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7214: 0xc775b64  jal         func_1DD6D90
    ctx->pc = 0x1DD7214u;
    SET_GPR_U32(ctx, 31, 0x1DD721Cu);
    ctx->pc = 0x1DD7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7214u;
    // 0x1dd7218: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6D90u, 0x1DD7214u, 0x1DD721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD721Cu;
label_1dd721c:
    // 0x1dd721c: 0x8e0e03a4  lw          $t6, 0x3A4($s0)
    ctx->pc = 0x1dd721cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1dd7220: 0x240f0042  addiu       $t7, $zero, 0x42
    ctx->pc = 0x1dd7220u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1dd7224: 0x15cf003a  bne         $t6, $t7, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DD7224u;
    {
        const bool branch_taken_0x1dd7224 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7224u;
        // 0x1dd7228: 0x8f8d8014  lw          $t5, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7224) {
            ctx->pc = 0x1DD7310u;
            goto label_1dd7310;
        }
    }
    ctx->pc = 0x1DD722Cu;
    // 0x1dd722c: 0x8e0f081c  lw          $t7, 0x81C($s0)
    ctx->pc = 0x1dd722cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1dd7230: 0x11e00037  beqz        $t7, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DD7230u;
    {
        const bool branch_taken_0x1dd7230 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7230u;
        // 0x1dd7234: 0x240f014e  addiu       $t7, $zero, 0x14E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7230) {
            ctx->pc = 0x1DD7310u;
            goto label_1dd7310;
        }
    }
    ctx->pc = 0x1DD7238u;
    // 0x1dd7238: 0x26530390  addiu       $s3, $s2, 0x390
    ctx->pc = 0x1dd7238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    // 0x1dd723c: 0x8e6e0014  lw          $t6, 0x14($s3)
    ctx->pc = 0x1dd723cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1dd7240: 0x51cf0034  beql        $t6, $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DD7240u;
    {
        const bool branch_taken_0x1dd7240 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x1dd7240) {
            ctx->pc = 0x1DD7244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7240u;
            // 0x1dd7244: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD7248u;
    // 0x1dd7248: 0x91af0428  lbu         $t7, 0x428($t5)
    ctx->pc = 0x1dd7248u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1064)));
    // 0x1dd724c: 0x55e00031  bnel        $t7, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DD724Cu;
    {
        const bool branch_taken_0x1dd724c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd724c) {
            ctx->pc = 0x1DD7250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD724Cu;
            // 0x1dd7250: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD7254u;
    // 0x1dd7254: 0x91af042a  lbu         $t7, 0x42A($t5)
    ctx->pc = 0x1dd7254u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1066)));
    // 0x1dd7258: 0x55e0002e  bnel        $t7, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1DD7258u;
    {
        const bool branch_taken_0x1dd7258 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7258) {
            ctx->pc = 0x1DD725Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7258u;
            // 0x1dd725c: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD7260u;
    // 0x1dd7260: 0x91af042b  lbu         $t7, 0x42B($t5)
    ctx->pc = 0x1dd7260u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1067)));
    // 0x1dd7264: 0x55e0002b  bnel        $t7, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DD7264u;
    {
        const bool branch_taken_0x1dd7264 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7264) {
            ctx->pc = 0x1DD7268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7264u;
            // 0x1dd7268: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD726Cu;
    // 0x1dd726c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd726cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd7270: 0x29ef000b  slti        $t7, $t7, 0xB
    ctx->pc = 0x1dd7270u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1dd7274: 0x51e00027  beql        $t7, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DD7274u;
    {
        const bool branch_taken_0x1dd7274 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7274) {
            ctx->pc = 0x1DD7278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7274u;
            // 0x1dd7278: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD727Cu;
    // 0x1dd727c: 0x55c00025  bnel        $t6, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DD727Cu;
    {
        const bool branch_taken_0x1dd727c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd727c) {
            ctx->pc = 0x1DD7280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD727Cu;
            // 0x1dd7280: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD7284u;
    // 0x1dd7284: 0x920f09b0  lbu         $t7, 0x9B0($s0)
    ctx->pc = 0x1dd7284u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2480)));
    // 0x1dd7288: 0x55e00022  bnel        $t7, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DD7288u;
    {
        const bool branch_taken_0x1dd7288 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7288) {
            ctx->pc = 0x1DD728Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7288u;
            // 0x1dd728c: 0x8dae00e0  lw          $t6, 0xE0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7314u;
            goto label_1dd7314;
        }
    }
    ctx->pc = 0x1DD7290u;
    // 0x1dd7290: 0xc775c0a  jal         func_1DD7028
    ctx->pc = 0x1DD7290u;
    SET_GPR_U32(ctx, 31, 0x1DD7298u);
    ctx->pc = 0x1DD7028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD7028u, 0x1DD7290u, 0x1DD7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7298u;
label_1dd7298:
    // 0x1dd7298: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1dd7298u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd729c: 0x104f001b  beq         $v0, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DD729Cu;
    {
        const bool branch_taken_0x1dd729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD729Cu;
        // 0x1dd72a0: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd729c) {
            ctx->pc = 0x1DD730Cu;
            goto label_1dd730c;
        }
    }
    ctx->pc = 0x1DD72A4u;
    // 0x1dd72a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd72a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd72a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd72a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd72ac: 0x2414014e  addiu       $s4, $zero, 0x14E
    ctx->pc = 0x1dd72acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dd72b0: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd72b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd72b4: 0xc775b18  jal         func_1DD6C60
    ctx->pc = 0x1DD72B4u;
    SET_GPR_U32(ctx, 31, 0x1DD72BCu);
    ctx->pc = 0x1DD72B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD72B4u;
    // 0x1dd72b8: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C60u, 0x1DD72B4u, 0x1DD72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD72BCu;
label_1dd72bc:
    // 0x1dd72bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd72c0: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x1dd72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dd72c4: 0xc775b08  jal         func_1DD6C20
    ctx->pc = 0x1DD72C4u;
    SET_GPR_U32(ctx, 31, 0x1DD72CCu);
    ctx->pc = 0x1DD72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD72C4u;
    // 0x1dd72c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C20u, 0x1DD72C4u, 0x1DD72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD72CCu;
label_1dd72cc:
    // 0x1dd72cc: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd72ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd72d0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd72d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd72d4: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
    // 0x1dd72d8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1dd72d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1dd72dc:
    // 0x1dd72dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dd72dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd72e0: 0xc775b1e  jal         func_1DD6C78
    ctx->pc = 0x1DD72E0u;
    SET_GPR_U32(ctx, 31, 0x1DD72E8u);
    ctx->pc = 0x1DD72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD72E0u;
    // 0x1dd72e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C78u, 0x1DD72E0u, 0x1DD72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD72E8u;
label_1dd72e8:
    // 0x1dd72e8: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD72E8u;
    {
        const bool branch_taken_0x1dd72e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1dd72e8) {
            ctx->pc = 0x1DD72ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD72E8u;
            // 0x1dd72ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7300u;
            goto label_1dd7300;
        }
    }
    ctx->pc = 0x1DD72F0u;
    // 0x1dd72f0: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd72f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd72f4: 0x8daf00e0  lw          $t7, 0xE0($t5)
    ctx->pc = 0x1dd72f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
    // 0x1dd72f8: 0xadf00908  sw          $s0, 0x908($t7)
    ctx->pc = 0x1dd72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 2312), GPR_U32(ctx, 16));
    // 0x1dd72fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd72fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd7300:
    // 0x1dd7300: 0x2a0f0004  slti        $t7, $s0, 0x4
    ctx->pc = 0x1dd7300u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dd7304: 0x55e0fff5  bnel        $t7, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DD7304u;
    {
        const bool branch_taken_0x1dd7304 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7304) {
            ctx->pc = 0x1DD7308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7304u;
            // 0x1dd7308: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD72DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd72dc;
        }
    }
    ctx->pc = 0x1DD730Cu;
label_1dd730c:
    // 0x1dd730c: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd730cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd7310:
    // 0x1dd7310: 0x8dae00e0  lw          $t6, 0xE0($t5)
    ctx->pc = 0x1dd7310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
label_1dd7314:
    // 0x1dd7314: 0x8dcf0078  lw          $t7, 0x78($t6)
    ctx->pc = 0x1dd7314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 120)));
    // 0x1dd7318: 0x15f10007  bne         $t7, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD7318u;
    {
        const bool branch_taken_0x1dd7318 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x1DD731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7318u;
        // 0x1dd731c: 0x240f0152  addiu       $t7, $zero, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7318) {
            ctx->pc = 0x1DD7338u;
            goto label_1dd7338;
        }
    }
    ctx->pc = 0x1DD7320u;
    // 0x1dd7320: 0x8dce007c  lw          $t6, 0x7C($t6)
    ctx->pc = 0x1dd7320u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 124)));
    // 0x1dd7324: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7324u;
    {
        const bool branch_taken_0x1dd7324 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd7324) {
            ctx->pc = 0x1DD7338u;
            goto label_1dd7338;
        }
    }
    ctx->pc = 0x1DD732Cu;
    // 0x1dd732c: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd732cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd7330: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd7330u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd7334: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd7334u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd7338:
    // 0x1dd7338: 0xc775c1c  jal         func_1DD7070
    ctx->pc = 0x1DD7338u;
    SET_GPR_U32(ctx, 31, 0x1DD7340u);
    ctx->pc = 0x1DD7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD7070u, 0x1DD7338u, 0x1DD7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7340u;
label_1dd7340:
    // 0x1dd7340: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd7344: 0x2405f6de  addiu       $a1, $zero, -0x922
    ctx->pc = 0x1dd7344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964958));
    // 0x1dd7348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd7348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd734c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd734cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd7350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd7350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd7354: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd7354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd7358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd7358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd735c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd735cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd7360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd7360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd7364: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd7364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd7368: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd7368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd736c: 0x8775b1c  j           func_1DD6C70
    ctx->pc = 0x1DD736Cu;
    ctx->pc = 0x1DD7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD736Cu;
    // 0x1dd7370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C70u;
    sub_01DD6C70_0x1dd6c70(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD7374u;
    // 0x1dd7374: 0x0  nop
    ctx->pc = 0x1dd7374u;
    // NOP
    ctx->pc = 0x1dd7378u;
}
