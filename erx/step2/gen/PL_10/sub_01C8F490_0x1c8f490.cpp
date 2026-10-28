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

// Function: sub_01C8F490
// Address: 0x1c8f490 - 0x1c8f558
void sub_01C8F490_0x1c8f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F490_0x1c8f490");
#endif

    switch (ctx->pc) {
        case 0x1c8f4acu: goto label_1c8f4ac;
        case 0x1c8f4bcu: goto label_1c8f4bc;
        case 0x1c8f4c8u: goto label_1c8f4c8;
        case 0x1c8f4d8u: goto label_1c8f4d8;
        case 0x1c8f4f0u: goto label_1c8f4f0;
        case 0x1c8f51cu: goto label_1c8f51c;
        default: break;
    }

    ctx->pc = 0x1c8f490u;

    // 0x1c8f490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f494: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f49c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8f4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f4a4: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F4A4u;
    SET_GPR_U32(ctx, 31, 0x1C8F4ACu);
    ctx->pc = 0x1C8F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F4A4u;
    // 0x1c8f4a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F4A4u, 0x1C8F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F4ACu;
label_1c8f4ac:
    // 0x1c8f4ac: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8f4acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8f4b0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8f4b4: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8F4B4u;
    SET_GPR_U32(ctx, 31, 0x1C8F4BCu);
    ctx->pc = 0x1C8F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F4B4u;
    // 0x1c8f4b8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8F4B4u, 0x1C8F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F4BCu;
label_1c8f4bc:
    // 0x1c8f4bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8f4c0: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F4C0u;
    SET_GPR_U32(ctx, 31, 0x1C8F4C8u);
    ctx->pc = 0x1C8F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F4C0u;
    // 0x1c8f4c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F4C0u, 0x1C8F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F4C8u;
label_1c8f4c8:
    // 0x1c8f4c8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8f4c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8f4cc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8f4d0: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8F4D0u;
    SET_GPR_U32(ctx, 31, 0x1C8F4D8u);
    ctx->pc = 0x1C8F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F4D0u;
    // 0x1c8f4d4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8F4D0u, 0x1C8F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F4D8u;
label_1c8f4d8:
    // 0x1c8f4d8: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c8f4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c8f4dc: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C8F4DCu;
    {
        const bool branch_taken_0x1c8f4dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f4dc) {
            ctx->pc = 0x1C8F4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8F4DCu;
            // 0x1c8f4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8F544u;
            goto label_1c8f544;
        }
    }
    ctx->pc = 0x1C8F4E4u;
    // 0x1c8f4e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8f4e8: 0xc7233e8  jal         func_1C8CFA0
    ctx->pc = 0x1C8F4E8u;
    SET_GPR_U32(ctx, 31, 0x1C8F4F0u);
    ctx->pc = 0x1C8F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F4E8u;
    // 0x1c8f4ec: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFA0u, 0x1C8F4E8u, 0x1C8F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F4F0u;
label_1c8f4f0:
    // 0x1c8f4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f4f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f4f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8f4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f4fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f504: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8f504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8f508: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c8f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c8f50c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C8F50Cu;
    {
        const bool branch_taken_0x1c8f50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F50Cu;
        // 0x1c8f510: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f50c) {
            ctx->pc = 0x1C8F540u;
            goto label_1c8f540;
        }
    }
    ctx->pc = 0x1C8F514u;
    // 0x1c8f514: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F514u;
    SET_GPR_U32(ctx, 31, 0x1C8F51Cu);
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F514u, 0x1C8F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F51Cu;
label_1c8f51c:
    // 0x1c8f51c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8f51cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f520: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c8f520u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8f524: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c8f524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c8f528: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c8f528u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c8f52c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c8f52cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8f530: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8F530u;
    {
        const bool branch_taken_0x1c8f530 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F530u;
        // 0x1c8f534: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f530) {
            ctx->pc = 0x1C8F544u;
            goto label_1c8f544;
        }
    }
    ctx->pc = 0x1C8F538u;
    // 0x1c8f538: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c8f538u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8f53c: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c8f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c8f540:
    // 0x1c8f540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8f544:
    // 0x1c8f544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8f544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f548: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F54Cu;
        // 0x1c8f550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F554u;
    // 0x1c8f554: 0x0  nop
    ctx->pc = 0x1c8f554u;
    // NOP
    ctx->pc = 0x1c8f558u;
}
