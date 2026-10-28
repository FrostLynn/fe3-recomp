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

// Function: sub_01DE5270
// Address: 0x1de5270 - 0x1de5330
void sub_01DE5270_0x1de5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5270_0x1de5270");
#endif

    switch (ctx->pc) {
        case 0x1de529cu: goto label_1de529c;
        case 0x1de52b0u: goto label_1de52b0;
        case 0x1de52dcu: goto label_1de52dc;
        case 0x1de52e4u: goto label_1de52e4;
        case 0x1de52e8u: goto label_1de52e8;
        case 0x1de52f8u: goto label_1de52f8;
        case 0x1de5300u: goto label_1de5300;
        default: break;
    }

    ctx->pc = 0x1de5270u;

    // 0x1de5270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de5274: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5274u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5278: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1de5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de527c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de5280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de5280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de5284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de5284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de5288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1de5288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de528c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de5290: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de5290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de5294: 0xc779386  jal         func_1DE4E18
    ctx->pc = 0x1DE5294u;
    SET_GPR_U32(ctx, 31, 0x1DE529Cu);
    ctx->pc = 0x1DE5298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5294u;
    // 0x1de5298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E18u, 0x1DE5294u, 0x1DE529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE529Cu;
label_1de529c:
    // 0x1de529c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de529cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de52a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de52a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de52a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de52a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de52a8: 0xc77938a  jal         func_1DE4E28
    ctx->pc = 0x1DE52A8u;
    SET_GPR_U32(ctx, 31, 0x1DE52B0u);
    ctx->pc = 0x1DE52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE52A8u;
    // 0x1de52ac: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E28u, 0x1DE52A8u, 0x1DE52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE52B0u;
label_1de52b0:
    // 0x1de52b0: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de52b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de52b4: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1de52b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1de52b8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de52bc: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de52bcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de52c0: 0x8dcd00dc  lw          $t5, 0xDC($t6)
    ctx->pc = 0x1de52c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de52c4: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1de52c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1de52c8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de52c8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de52cc: 0x25a408c8  addiu       $a0, $t5, 0x8C8
    ctx->pc = 0x1de52ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 2248));
    // 0x1de52d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de52d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de52d4: 0xc77939a  jal         func_1DE4E68
    ctx->pc = 0x1DE52D4u;
    SET_GPR_U32(ctx, 31, 0x1DE52DCu);
    ctx->pc = 0x1DE52D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE52D4u;
    // 0x1de52d8: 0xadaf0cd8  sw          $t7, 0xCD8($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E68u, 0x1DE52D4u, 0x1DE52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE52DCu;
label_1de52dc:
    // 0x1de52dc: 0xc779398  jal         func_1DE4E60
    ctx->pc = 0x1DE52DCu;
    SET_GPR_U32(ctx, 31, 0x1DE52E4u);
    ctx->pc = 0x1DE52E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE52DCu;
    // 0x1de52e0: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E60u, 0x1DE52DCu, 0x1DE52E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE52E4u;
label_1de52e4:
    // 0x1de52e4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de52e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1de52e8:
    // 0x1de52e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de52e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de52ec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de52ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1de52f0: 0xc779386  jal         func_1DE4E18
    ctx->pc = 0x1DE52F0u;
    SET_GPR_U32(ctx, 31, 0x1DE52F8u);
    ctx->pc = 0x1DE52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE52F0u;
    // 0x1de52f4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E18u, 0x1DE52F0u, 0x1DE52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE52F8u;
label_1de52f8:
    // 0x1de52f8: 0xc77939c  jal         func_1DE4E70
    ctx->pc = 0x1DE52F8u;
    SET_GPR_U32(ctx, 31, 0x1DE5300u);
    ctx->pc = 0x1DE52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE52F8u;
    // 0x1de52fc: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E70u, 0x1DE52F8u, 0x1DE5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5300u;
label_1de5300:
    // 0x1de5300: 0x2a2f0002  slti        $t7, $s1, 0x2
    ctx->pc = 0x1de5300u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1de5304: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DE5304u;
    {
        const bool branch_taken_0x1de5304 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5304u;
        // 0x1de5308: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5304) {
            ctx->pc = 0x1DE52E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de52e8;
        }
    }
    ctx->pc = 0x1DE530Cu;
    // 0x1de530c: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x1de530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x1de5310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de5310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de5314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de5318: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1de5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1de531c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de531cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de5320: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de5320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de5324: 0x877939e  j           func_1DE4E78
    ctx->pc = 0x1DE5324u;
    ctx->pc = 0x1DE5328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5324u;
    // 0x1de5328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E78u;
    sub_01DE4E78_0x1de4e78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE532Cu;
    // 0x1de532c: 0x0  nop
    ctx->pc = 0x1de532cu;
    // NOP
    ctx->pc = 0x1de5330u;
}
